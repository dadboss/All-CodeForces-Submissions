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
#define LG 20
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
vi a[N];
ll par[LG][N],level[N];
ll c[N];
ll n;
void dfs(ll k,ll parent,ll d)
{
  par[0][k]=parent;
  level[k]=d;
  for(auto it:a[k])
  {
    if(it==parent)
      continue;
    dfs(it,k,d+1);
  }
}
void precompute()
{
  for(ll i=1;i<LG;i++)
  {
    for(ll j=1;j<=n;j++)
    {
      if(par[i-1][j])
          par[i][j]=par[i-1][par[i-1][j]];
    }
  }
}
ll lca(ll u, ll v)
{
  if(level[u]<level[v])
      swap(u,v);
  ll diff=level[u]-level[v];
  for(ll i=LG-1;i>=0;i--)
  {
    if((1ll<<i) & diff)
    {
      u=par[i][u];
    }
  }
  if(u==v)
    return u;
  for(ll i=LG-1;i>=0;i--)
  {
    if(par[i][u] && par[i][u]!=par[i][v])
    {
      u=par[i][u];
      v=par[i][v];
    }
  }
  return par[0][u];
}
map<pi,ll> m;
ll q;
ll fds(ll n,ll p)
{
  ll tot=0;
  for(auto x:a[n])
  {
    if(x!=p)
      {
        q=fds(x,n);
        m[{x,n}]=m[{n,x}]=q;
        tot+=q;
      }
  }
  return tot+c[n];
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll l,r;
  cin>>n;
  ll i=0;
  vpi v;
  while(i<n-1)
  {
    cin>>l>>r;
    v.pb({l,r});
    a[l].pb(r);
    a[r].pb(l);
    i++;
  }
  dfs(1,0,1);
  precompute();
  ll k;
  cin>>k;
  while(k--)
  {
    cin>>l>>r;
    c[l]++;
    c[r]++;
    //deb(lca(l,r))
    c[max(1ll,lca(l,r))]-=2;
  }
  //deb(lca(1,4));
  fds(1,0);
  for(auto x:v)
    cout<<m[x]<<" ";
}