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
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  fac[0] = 1; 
    for (ll i=1 ; i<1000010; i++) 
        fac[i] = fac[i-1]*i%p;
  ll n;
  cin>>n;
  n--;
  ll ans=1,tot=0,d;
  cin>>d;
  tot+=d;
  while(n--)
  {
  	cin>>d;
  	tot+=d;
  	ans*=ncr(tot-1,d-1);
  	ans%=p;
  }
  deb(ans)
}
