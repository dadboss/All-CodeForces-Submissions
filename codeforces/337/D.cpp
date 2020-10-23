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
#define N 100009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 vi a[N];
 bool f[N];
 ll dist[2][N];
 ll v,mxd;
void dfs(ll n,ll p,ll d)
{
  if(f[n]&&d>mxd)
  {
    mxd=d;
    v=n;
  }
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n,d+1);
}
void fds(ll n,ll p,ll d,ll k)
{
  dist[k][n]=d;
  for(auto x:a[n])
    if(x!=p)
      fds(x,n,d+1,k);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,d,j,l,r;
  cin>>n>>m>>d;
  ll i=0;
  while(i<m)
  {
    cin>>l;
    f[l]=1;
    i++;
  }
  j=l;
  i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(l,-1,0);
  ll u=v;
  mxd=0;
  dfs(u,-1,0);
  fds(u,-1,0,0);
  fds(v,-1,0,1);
  ll ans=0;
  i=1;
  while(i<=n)
  {
    if(dist[0][i]<=d&&dist[1][i]<=d)
      ans++;
    i++;
  }
  deb(ans)
}