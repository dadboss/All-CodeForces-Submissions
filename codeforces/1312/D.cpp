#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll p=998244353;
ll fac[2000001]; 
ll power(ll x, ll y, ll p=998244353 ) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
ll modInverse(ll n, ll p=998244353 ) 
{ 
    return power(n, p-2, p); 
} 
ll ncr(ll n,ll r, ll p=998244353 ) 
{ 
   // Base case 
   if (r==0||r==n) 
      return 1; 
      
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    fac[0] = 1; 
    for (ll i=1 ; i<2000001; i++) 
        fac[i] = fac[i-1]*i%p; 
	ll n,m;
	cin>>n>>m;
	ll	ans=ncr(m,n-1);
	ans%=p;
	ans*=(n-2);
	ans%=p;
	n-=3;
	ll q=power(2,n);
	//cout<<q<<" ";
	q%=p;
	ans*=q;
	ans%=p;
	cout<<ans;
}