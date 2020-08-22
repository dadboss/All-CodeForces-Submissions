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
#define INF 1e15
vector<pi> a[N];
vi dist(N,INF);
ll ans=0;
ll par[N];
void shortestPath(ll src) 
{ 
    set<pi> pq; 
    pq.insert({0, src}); 
    dist[src] = 0; 
    //ll par[V+1]={};
    ll u,v,weight;
    while (!pq.empty()) 
    { 
        //deB(pq.top().ff,pq.top().ss)
        u = pq.begin()->ss; 
        pq.erase(pq.begin());
        for(auto i:a[u])
        { 
            v = i.ff; 
            weight = i.ss; 
            if (dist[v]>dist[u]+weight) 
            { 
                //YES
                //deb(v)
              if(dist[v]!=INF)
                pq.erase({dist[v],v});
                par[v]=1;
                dist[v]=dist[u]+weight; 
                pq.insert({dist[v], v}); 
            } 
            else if(dist[v]==dist[u]+weight)
              {
                //YES
                par[v]++;
              }
        } 
    }
} 
ll m[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,ma,k,l,r,w;
  cin>>n>>ma>>k;
  while(ma--)
  {
    cin>>l>>r>>w;
    a[l].pb({r,w});
    a[r].pb({l,w});
  }
  vi v;
  while(k--)
  {
    cin>>l>>r;
    if(m[l])
    {
      m[l]=min(m[l],r);
      ans++;
    }
    else
      {
        m[l]=r;
        v.pb(l);
      }
  }
  for(auto x:v)
  {
    a[1].pb({x,m[x]});
    a[x].pb({1,m[x]});
  }
  shortestPath(1);
  for(auto x:v)
  {
    if(dist[x]<m[x])
      ans++;
    else if(dist[x]==m[x]&&par[x]>1)
      ans++;
  }
  deb(ans)
}