#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
set<ll> s;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,m,i,j,st,e,ans,mid,n,d;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>m>>n;
    vector<vi> a(m+1, vi(n+1));
    i=1;
    while(i<=m)
    {
      j=1;
      while(j<=n)
      {
        cin>>a[i][j];
        j++;
      }
      i++;
    }
    //reto
    st=1;
    e=1000000000;
    while(st<=e)
    {
      mid=(st+e)/2;
      s.clear();
      j=1;
      d=0;
      while(j<=n)
      {
        i=1;
        ll op=0;
        while(i<=m)
        {
          if(a[i][j]>=mid)
          {
            op=1;
            //reto
            if(s.find(i)!=s.end())
              {
                d=1;
              }
            s.insert(i);
            
          }
          i++;
        }
        if(op==0)
        {
          d=0;
          break;
        }
        j++;
      }
      if(d)
      {
        ans=mid;
        st=mid+1;
      }
      else
        e=mid-1;
    }
    deb(ans)
  }
}         