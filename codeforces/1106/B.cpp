#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[100009],c[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,t,q,ans,f;
  cin>>n>>m;
  ll i=1;
  while(i<=n)
  cin>>a[i++];
  i=1;
  while(i<=n)
  cin>>c[i++];
  set<pair<ll,ll>> s;
  i=1;
  while(i<=n)
  {
    s.insert({c[i],i});
    i++;
  }
  while(m--)
  { 
    if(s.empty())
    {
      deb(0)
      continue;
    }
    cin>>t>>q;
    if(q<=a[t])
    {
      deb(q*c[t]);
      a[t]-=q;
      if(a[t]==0)
        s.erase({c[t],t});
    }
    else
    {
      ans=0;
      if(a[t])
      {
        ans+=a[t]*c[t];
        q-=a[t];
        a[t]=0;
        s.erase({c[t],t});
      }
      f=0;
      while(!s.empty())
      {
        auto x=*s.begin();
        if(a[x.ss]>=q)
        {
          ans+=q*x.ff;
          deb(ans)
          a[x.ss]-=q;
          if(a[x.ss]==0)
          {
            s.erase(s.begin());
          }
          f=1;
          break;
        }
        else
        {
          ans+=a[x.ss]*x.ff;
          q-=a[x.ss];
          a[x.ss]=0;
          s.erase(s.begin());
        }
      }
      if(f==0)
        deb(0)
    }
  } 
}