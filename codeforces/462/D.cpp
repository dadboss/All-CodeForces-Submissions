#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define N 200009
#define p mod
vi a[N];
ll power(ll x, ll y ) 
{ 
    ll res = 1;
    x = x % p; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;  
        x = (x*x) % p; 
    } 
    return res; 
} 
ll modInverse(ll n ) 
{ 
    return power(n, p-2); 
} 
ll t,dp[N][2],c[N];
void dfs(ll n,ll P)
{
  ll sum=1;
  for(auto x:a[n])
  {
    if(x!=P)
    {
      dfs(x,n);
      sum*=(dp[x][0]+dp[x][1])%mod;
      sum%=mod;
    }
  }
  if(c[n])
  {
    dp[n][0]=0;
    dp[n][1]=sum;
  }
  else
  {
    dp[n][0]=sum;
    dp[n][1]=0;
    for(auto x:a[n])
    {
      if(x!=P)
      {
        t=sum*modInverse((dp[x][0]+dp[x][1])%mod);
        t%=mod;
        dp[n][1]+=(t*dp[x][1])%mod;
        dp[n][1]%=mod;
      }
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d;
  cin>>n;
  ll i=1;
  while(i<n)
  {
    cin>>d;
    a[d].pb(i);
    a[i].pb(d);
    i++;
  }
  i=0;
  while(i<n)
    cin>>c[i++];
  dfs(0,-1);
  deb(dp[0][1])
  /*i=0;
  while(i<n)
  {
    deB(dp[i][0],dp[i][1])
    i++;
  }*/
}    