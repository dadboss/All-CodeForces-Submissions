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
#define N 5009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 vi a[N];
 ll p[N][N],ans[N];
 bool v[N],c[N];
 set<ll> s;
void dfs(ll n,ll par)
{

  if(v[n])
    return;
  //deB(n,par)
  v[n]=1;
  if(p[par][n])
    {
      ans[p[par][n]]=1;
      s.insert(p[par][n]);
    }
  if(c[n])
    {
      v[n]=0;
      return;
    }
  for(auto x:a[n])
    dfs(x,n);
  v[n]=0;
  c[n]=1;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,l,r;
  cin>>n>>m;
  ll i=1;
  while(i<=m)
  {
    cin>>l>>r;
    a[l].pb(r);
    //a[r].pb(l);
    p[l][r]=i;
    i++;
  }
  i=1;
  while(i<=n)
  {
    if(c[i]==0)
      dfs(i,0);
    i++;
  }
  //deb(s.size())
  deb((1+(s.size()!=m)))
  i=1;
  while(i<=m)
  {
    cout<<2-ans[i]<<" ";
    i++;
  }
}