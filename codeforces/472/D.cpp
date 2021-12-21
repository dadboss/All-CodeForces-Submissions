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
vector<pair<ll,pi>> v;
ll parent[N],red[N];
ll d[N];
vpi g[N];
ll findParent(ll i)
{
    if(parent[parent[i]]!=parent[i])
        parent[i]=findParent(parent[i]);
    return parent[i];
}
void unionNodes(ll a,ll b) /// pass parents in this function
{
  if(red[a]<red[b])
    swap(a,b);
  parent[b]=a;
  red[a]+=red[b];
  return;
}
void dfs(ll n,ll p,ll di)
{
  d[n]=di;
  for(auto x:g[n])
    if(x.ff!=p)
      dfs(x.ff,n,di+x.ss);
}
ll a[2009][2009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,j,l,r;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    parent[i]=i;
    red[i]=1;
    j=1;
    while(j<=n)
    {
      cin>>a[i][j];
      if(i==j&&a[i][j])
      {
        NO
        reto
      }
      if(i!=j&&a[i][j]==0)
      {
        NO
        reto
      }
      j++;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    j=i+1;
    while(j<=n)
    {
      v.pb({a[i][j],{i,j}});
      if(a[i][j]!=a[j][i])
      {
        NO
        reto
      }
      j++;
    }
    i++;
  }
  sort(all(v));
  for(auto x:v)
  {
    l=findParent(x.ss.ff);
    r=findParent(x.ss.ss);
    if(l!=r)
    {
      g[x.ss.ff].pb({x.ss.ss,x.ff});
      g[x.ss.ss].pb({x.ss.ff,x.ff});
      unionNodes(l,r);
    }
  }
  i=1;
  while(i<=n)
  {
    dfs(i,-1,0);
    j=1;
    while(j<=n)
    {
      if(a[i][j]!=d[j])
      {
        NO
        reto
      }
      j++;
    }
    i++;
  }
  YES
}         