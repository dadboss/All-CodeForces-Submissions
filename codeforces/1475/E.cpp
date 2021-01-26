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
#define N 1009
#define p mod
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll fac[1000010]; 
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
ll ncr(ll n,ll r ) 
{ 
   if (r==0||r==n) 
      return 1; 
    return (fac[n]* modInverse(fac[r]) % p * 
            modInverse(fac[n-r]) % p) % p; 
}
ll a[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    fac[0] = 1; 
    for (ll i=1 ; i<1000010; i++) 
        fac[i] = fac[i-1]*i%p;
  ll t=1,x,n,k,i,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    i=1;
    while(i<=1000)
    {
      f[i]=0;
      i++;
    }
    i=0;
    while(i<n)
      {
        cin>>a[i];
        f[a[i]]++;
        i++;
      }
    sort(a,a+n);   
    i=n-1;
    ans=1;
    while(i>=n-k)
        i-=f[a[i]];
    if(i!=n-k-1)
    {
      x=i+f[a[i+1]];
      ans*=ncr(f[a[i+1]],x-(n-k)+1);
      ans%=mod;
    }
    deb(ans)
  }
}