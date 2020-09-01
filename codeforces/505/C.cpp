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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
map<pi,ll> m;
ll mx=0;
ll mn=LLONG_MAX;
ll a[30009];
ll f(ll n,ll j)
{
  //deB(n,j)
  if(n>mx||j<1)
    return 0;
  if(m.find({n,j})!=m.end())
    return m[{n,j}];
  return  m[{n,j}]=a[n]+max({f(n+j-1,j-1),f(n+j,j),f(n+j+1,j+1)});
}
ll dp[30009][1009];
ll g(ll n,ll j)
{
  if(n>mx||j<1)
    return 0;
  if(dp[n][j]!=-1)
    return dp[n][j];
  return dp[n][j]=a[n]+max({g(n+j-1,j-1),g(n+j,j),g(n+j+1,j+1)});
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  memset(dp,-1,sizeof(dp));
  ll n,d,q;
  cin>>n>>d;
  while(n--)
  {
    cin>>q;
    mx=max(mx,q);
    mn=min(mn,q);
    a[q]++;
  }
  if(d>=1001)
    deb(f(d,d))
  else
    deb(g(d,d))
  //for(auto x:m)
    //Deb(x.ff.ff,x.ff.ss,x.ss)
}