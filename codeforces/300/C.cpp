#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
#define p 1000000007
ll fac[1000010],a,b; 
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
inline bool f(ll n)
{
  while(n)
  {
    if(n%10!=a&&n%10!=b)
      return 0;
    n/=10;
  }
  return 1;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  fac[0] = 1; 
    for (ll i=1 ; i<1000010; i++) 
        fac[i] = fac[i-1]*i%p;
  ll n;
  cin>>a>>b>>n;
  ll i=0,x=n*a;
  ll ans=0;
  while(i<=n)
  {
    if(f(x))
    {
      ans+=ncr(n,i);
      ans%=p;
    }
    x+=b-a;
    i++;
  }
  deb(ans)
}