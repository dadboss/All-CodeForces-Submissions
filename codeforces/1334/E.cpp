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
#define mod 998244353 
#define md 998244353 
#define N 200009
#define p mod
ll fac[1009];
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  	fac[0]=1;
  ll i=1;
  while(i<=1000)
  {
  	fac[i]=i*fac[i-1];
  	fac[i]%=mod;
  	i++;
  }
  ll d,q,l,r,ans=1;
  cin>>d>>q;
  i=2;
  vi pr;
  vpi po,ne;
  while(i*i<=d)
  {
  	if(d%i==0)
  	{
  		pr.pb(i);
  		while(d%i==0)
  			d/=i;
  	}
  	i++;
  }
  if(d>1)
  	pr.pb(d);
  //deb(pr.size())
  ll pos,neg,ct;
  while(q--)
  {
  	cin>>l>>r;
  	pos=neg=0;
  	ans=1;
  	for(auto x:pr)
  	{
  		ct=0;
  		while(l%x==0)
  		 	ct++,l/=x;
  		while(r%x==0)
	  		ct--,r/=x;
	  	if(ct>0)
	  	{
	  		//deb(fac[ct])
	  		pos+=ct;
	  		ans*=modInverse(fac[ct]);
	  		ans%=mod;
	  	}
	  	else if(ct<0)
	  	{
	  		ct=-ct;
	  		neg+=ct;
	  		ans*=modInverse(fac[ct]);
	  		ans%=mod;
	  	}
  	}
  	//deb(ans)
  	ans*=fac[pos];
  	ans%=mod;
  	ans*=fac[neg];
  	ans%=mod;
  	deb(ans)
  }
}