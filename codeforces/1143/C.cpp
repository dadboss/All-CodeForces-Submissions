#include<bits/stdc++.h>
using namespace std;
#define ll int
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
vector<ll> a[100009];
ll c[100009],p[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,r;
  cin>>n;
  ll i=1;
  bool f,fr=0;
  while(i<=n)
  {
    cin>>p[i]>>c[i];
    if(p[i]==-1)
      r=i;
    else
    {
      a[p[i]].pb(i);
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    if(c[i])
    {
      f=0;
      for(auto x:a[i])
        if(x!=p[i]&&c[x]==0)
        {
          f=1;
          break;
        }
      if(f==0)
        {
          cout<<i<<" ";
          fr=1;
        }
    }
    i++;
  }
  if(fr==0)
    deb(-1)
}