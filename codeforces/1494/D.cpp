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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll parent[N],ans[N];
ll findParent(ll i)
{
    if(parent[parent[i]]!=parent[i])
        parent[i]=findParent(parent[i]);
    return parent[i];
}
void unionNodes(ll a,ll b)
{
    parent[a]=b;
    return;
}
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d;
  cin>>n;
  ll ct=n+1;
  ll j,i=1;
  vector<pair<ll,pi>> V;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      cin>>d;
      if(i==j)
        a[i]=d;
      else if(j>i)
        V.pb({d,{i,j}});
      j++;
    }
    i++;
  }
  sort(all(V));
  i=1;
  vpi e;
  while(i<=200000)
  {
    parent[i]=i;
    //size[i]=1;
    i++;
  }
 ll l,r,u,v;
  for(auto x:V)
  {
    l=x.ss.ff;
    r=x.ss.ss;
    //Deb(x.ff,l,r)
    //deb(findParent(1))
    u=findParent(l);
    v=findParent(r);
    //deB(u,v)
    if(u==v)
      cont;
    if(max(a[u],a[v])<x.ff)
    {
      e.pb({u,ct});
      e.pb({v,ct});
      unionNodes(u,ct);
      //deb(parent[1])
      unionNodes(v,ct);
      //deb(parent[1])
      a[ct]=x.ff;
      ct++;
    }
    else if(a[u]==x.ff)
    {
      e.pb({v,u});
      unionNodes(v,u);
    }
    else
    {
      e.pb({u,v});
      unionNodes(u,v);
    }
  }
  deb(ct-1)
  i=1;
  while(i<ct)
  {
    cout<<a[i]<<" ";
    i++;
  }
  cout<<"\n";
  deb(ct-1)
  for(auto x:e)
    deB(x.ff,x.ss)
}