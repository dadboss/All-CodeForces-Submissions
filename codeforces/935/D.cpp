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
ll a[N],b[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>n>>m;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  ll x;
  while(i<n)
    cin>>b[i++];
  ll ans=0,pr=1;
  i=0;
  while(i<n)
  {
    //cout<<pr<<" "<<ans<<"\n";
    if(a[i]==0&&b[i])
    {
      pr*=modInverse(m);
      pr%=mod;
      x=(m-b[i])*pr;
      x%=mod;
      ans+=x;
      ans%=mod;
    }
    else if(a[i]&&b[i]==0)
    {
      pr*=modInverse(m);
      pr%=mod;
      x=(a[i]-1)*pr;
      x%=mod;
      ans+=x;
      ans%=mod;
    }
    else if(a[i]+b[i]==0)
    {
      pr*=modInverse(m);
      pr%=mod;
      x=(m-1)*pr;
      x%=mod;
      x*=modInverse(2);
      x%=mod;
      ans+=x;
      ans%=mod;
    }
    else if(a[i]>b[i])
    {
      ans+=pr;
      ans%=mod;
      break;
    }
    else if(a[i]<b[i])
      break;
    i++;
  }
  //cout<<pr<<" ";
  deb(ans)
}    