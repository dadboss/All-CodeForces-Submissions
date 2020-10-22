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
set<ll> a[N];
char ans[N];
ll tot[N];
ll tl;
void dfs(ll n,ll p)
{
  tl++;
  tot[n]=1;
  for(auto x:a[n])
  {
    if(x!=p)
      {
        dfs(x,n);
        tot[n]+=tot[x];
      }
  }
}
ll centroid(ll n,ll p)
{
  for(auto x:a[n])
    if(x!=p&&tot[x]>tl/2)
      return centroid(x,n);
  return n;
}
ll c;
void decompose(ll n,char ch)
{
  //deb(ch)
  tl=0;
  dfs(n,-1);
  c=centroid(n,-1);
  //deb(c)
  ans[c]=ch;
  vi d;
  for(auto x:a[c])
    {
      a[x].erase(c);
      d.pb(x);
    }
  for(auto x:d)
    decompose(x,ch+1);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll l,r,i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].insert(r);
    a[r].insert(l);
  }
  decompose(1,'A');
  i=1;
  while(i<=n)
  {
    cout<<ans[i]<<" ";
    i++;
  }
}