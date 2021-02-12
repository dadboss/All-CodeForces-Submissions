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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll x,st,e,mid,up,y;
ll sum(ll a,ll d,ll n)
{
	return a+(n-1)*d;
}
ll f(ll i)
{
	st=1;
	e=1e9;
	ll ans;
	//deb(sum(i*i-1,i-1,2))
	while(st<=e)
	{
		mid=(st+e)/2;
		if(sum(i*i-1,i-1,mid)<=x)
		{	
			ans=mid;
			st=mid+1;
		}
		else
			e=mid-1;
	}
	up=i+ans-1;
	up=min(up,y);
	ans=min(ans,y-i+1);
	ans=max(ans,0ll);	
	return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,ans,k;
  cin>>t;
  while(t--)
  {
  	cin>>x>>y;
  	i=2;
  	ans=0;
  	while(i*i-1<=x)
  	{
  		k=f(i);
  		ans+=k;
  		i++;
  	}  
  	deb(ans)
  }
}