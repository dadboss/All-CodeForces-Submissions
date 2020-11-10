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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll n,l[300],c[300];
map<pi,ll> dp;
ll f(ll i,ll g)
{
  if(g==1)
    return 1;
  if(i==n+1)
    return INT_MAX;
  if(dp.find({i,g})!=dp.end())
    return dp[{i,g}];
  return dp[{i,g}]=min(f(i+1,g),c[i]+f(i+1,__gcd(g,l[i])));
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n;
  ll i=0;
  i=0;
  ll g=0;
  while(i<n)
    {
      cin>>l[i];
      g=__gcd(g,l[i]);
      i++;
    }
    if(g!=1)
    {
      deb(-1)
      reto;
    }
  i=0;
  while(i<n)
    cin>>c[i++];
  deb(f(0,0)-1)
}