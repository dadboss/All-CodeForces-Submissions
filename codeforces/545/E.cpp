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
#define inf 1e15
ll parent[N],red[N];
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
map<pi,pi> e;
vpi a[N];
ll L[N],d[N],R[N];
ll par[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,l,r,w;
  cin>>n>>m;
  ll i=1;
  while(i<=m)
  {
    cin>>l>>r>>w;
    e[{l,r}]=e[{r,l}]={w,i};
    a[l].pb({r,w});
    a[r].pb({l,w});
    L[i]=l;
    R[i]=r;
    i++;
  }
  i=1;
  while(i<=n)
  {
    parent[i]=i;
    red[i]=1;
    d[i]=inf;
    i++;
  }
  ll rt,u;
  cin>>rt;
  set<pi> s;
  s.insert({0,rt});
  d[rt]=0;
  while(!s.empty())
  {
    if(s.begin()->ff!=d[s.begin()->ss])
    {
      s.erase(s.begin());
      cont;
    }
    u=s.begin()->ss;
    s.erase(s.begin());
    for(auto x:a[u])
    {
      if(d[x.ff]>x.ss+d[u])
      {
        d[x.ff]=x.ss+d[u];
        s.insert({d[x.ff],x.ff});
        par[x.ff]=(u);
      }
      else if(d[x.ff]==x.ss+d[u]&&x.ss<e[{x.ff,par[x.ff]}].ff)
        par[x.ff]=u;
    }
  }
  vi re;
  ll ans=0;
  i=1;
  while(i<=n)
  {
    if(par[i])
    {
      ans+=e[{i,par[i]}].ff;
      re.pb(e[{i,par[i]}].ss);
    }
    i++;
  }
  deb(ans)
  for(auto x:re)
    cout<<x<<" ";
}         