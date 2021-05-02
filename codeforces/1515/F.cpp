#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
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
#define N 300009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll parent[N],red[N],cost[N];
ll findParent(ll i)
{
    if(parent[parent[i]]!=parent[i])
        parent[i]=findParent(parent[i]);
    return parent[i];
}
set<pi> g[N];
ll x;
void unionNodes(ll a,ll b)
{
  
    if(red[a]>=red[b])
    {
      red[a]+=red[b];
      parent[b]=a;
      cost[a]+=cost[b]-x;
      for(auto yt:g[b])
        g[a].insert(yt);
      g[b].clear();
    }
    else
    {
      red[b]+=red[a];
      parent[a]=b;
      cost[b]+=cost[a]-x;
      for(auto yt:g[a])
        g[b].insert(yt);
      g[a].clear();
    }
    return;
}
pi e[N];
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,l,r,u,pa,pB;
  cin>>n>>m>>x;
  set<pi,greater<pi>> s;
  ll i=1,tot=0;
  while(i<=n)
   {
    parent[i]=i;
    red[i]=1;
    cin>>a[i];
    tot+=a[i];
    cost[i]=a[i];
    s.insert({a[i],i});
    i++;
   } 
   if(tot<(n-1)*x)
   {
    NO
    reto;
   }
  i=0;
  while(i<m)
  {
    cin>>l>>r;
    e[i].ff=l;
    e[i].ss=r;
    g[l].insert({r,i});
    g[r].insert({l,i});
    i++;
  }
  vi ans;
  while(!s.empty())
  { 
    u=s.begin()->ss;
    s.erase(s.begin());
    while(!g[u].empty())
    {
      pi t=*g[u].begin();
      g[u].erase(g[u].begin());
      if(findParent(u)!=findParent(t.ff))
      {
        s.erase({cost[findParent(t.ff)],findParent(t.ff)});
        ans.pb(t.ss);
        unionNodes(findParent(u),findParent(t.ff));
        s.insert({cost[findParent(u)],findParent(u)});
        break;
      }
    }
  }
  YES
  for(auto x:ans)
    deb(x+1)
}