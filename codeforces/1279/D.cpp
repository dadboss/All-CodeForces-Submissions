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
#define N 1000009
#define p 998244353  
#define mod p
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
vi a[N];
ll k[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d,j;
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>k[i];
    j=0;
    while(j<k[i])
    {
        cin>>d;
        a[i].pb(d);
        f[d]++;
        j++;
    }
    i++;
  }
  ll mn=modInverse(n);
  ll ans=0,sum;
  i=0;
  while(i<n)
  {
    sum=0;
    for(auto x:a[i])
        sum+=(f[x]*mn)%mod,sum%=mod;
    sum*=modInverse(k[i]);
    ans+=sum;
    ans%=mod;
    i++;
  }
  ans*=mn;
  ans%=mod;
  deb(ans)
}        