#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 1009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 
vpi a[N];
ll l[N],r[N],p[N],o[N],d[N][N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,k,w,sum;
  cin>>n>>m>>k;
  ll i=0;
  while(i<m)
  {
    cin>>l[i]>>r[i]>>w;
    a[l[i]].pb({r[i],w});
    a[r[i]].pb({l[i],w});
    i++;
  }
  i=0;
  while(i<k)
  {
    cin>>p[i]>>o[i];
    i++;
  }
  i=1;
  ll j;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      d[i][j]=INT_MAX;
      j++;
    }
    i++;
  }
  i=1;
  pi f;
  while(i<=n)
  {
    d[i][i]=0;
    set<pi> s;
    s.insert({0,i});
    while(!s.empty())
    {
      f=*s.begin();
      s.erase(s.begin());
      for(auto x:a[f.ss])
      {
        if(d[i][x.ff]>f.ff+x.ss)
        {
          if(d[i][x.ff]!=INT_MAX)
            s.erase({d[i][x.ff],x.ff});
          d[i][x.ff]=f.ff+x.ss;
          s.insert({f.ff+x.ss,x.ff});
        }
      }
    }
    i++;
  } 
  ll ans=0;
  i=0;
  while(i<k)
  {
    ans+=d[p[i]][o[i]];
    i++;
  }
  i=0;
  while(i<m)
  {
    j=sum=0;
    while(j<k)
    {
      sum+=min({d[p[j]][o[j]],d[p[j]][l[i]]+d[r[i]][o[j]],d[o[j]][l[i]]+d[r[i]][p[j]]});
      j++;
    }
    ans=min(ans,sum);
    i++;
  }
  deb(ans)
}