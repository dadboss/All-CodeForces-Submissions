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
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define debb(x,y) cout<<x<<" "<<y<<"\n";
#define debbb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
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
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,n,d,ans,j;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	vi v,o;
  	i=n;
  	while(i--)
  	{
  		cin>>d;
  		if(d%2)
  			o.pb(d);
  		else
  			v.pb(d);
  	}
  	for(auto x:o)
  		v.pb(x);
  	ans=0;
  	i=0;
  	while(i<n)
  	{
  		j=i+1;
  		while(j<n)
  		{
  			if(__gcd(v[i],2*v[j])>1)
  				ans++;
  			j++;
  		}
  		i++;
  	}
  	deb(ans)
  }
}