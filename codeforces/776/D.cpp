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
ll par[N],r[N],vis[N];
vpi a[N];
void dfs(ll n,ll val)
{
  if(vis[n]&&vis[n]!=val)
  {
    NO
    exit(0);
  }
  if(vis[n])
    return;
  vis[n]=val;
  for(auto x:a[n])
  {
    if(x.ss==0)
      dfs(x.ff,3-val);
    else
      dfs(x.ff,val);
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,x,d;
  cin>>n>>m;
  ll i=1;
  while(i<=n)
    cin>>r[i++];
  i=1;
  while(i<=m)
  {
    cin>>x;
    while(x--)
    {
      cin>>d;
      if(par[d]==0)
        par[d]=i;
      else
      {
        a[i].pb({par[d],r[d]});
        a[par[d]].pb({i,r[d]});
      }
    }
    i++;
  }
  i=1;
  while(i<=m)
  {
    if(vis[i]==0)
      {
        //deb(i)
        dfs(i,1);
      }
    i++;
  }
  YES
}         