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

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll x,t=1,i,a,b,c,ans,d,n,y;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	a=b=c=0;
  	i=n;
  	x=i/3;
  	while(i--)
	{
		cin>>d;
		if(d%3==0)
			a++;
		else if(d%3==1)
			b++;
		else
			c++;
	}  
	ans=0;
	if(a>x&&b<x)
	{
		y=min(a-x,x-b);
		ans+=y;
		a-=y;
		b+=y;
	}
	if(b>x&&c<x)
	{
		y=min(b-x,x-c);
		ans+=y;
		b-=y;
		c+=y;
	}
	if(c>x&&a<x)
	{
		y=min(c-x,x-a);
		ans+=y;
		c-=y;
		a+=y;
	}
	if(a>x&&c<x)
	{
		y=min(a-x,x-c);
		ans+=2*y;
		a-=y;
		c+=y;
	}
	if(b>x&&a<x)
	{
		y=min(b-x,x-a);
		ans+=2*y;
		b-=y;
		a+=y;
	}
	if(c>x&&b<x)
	{
		y=min(c-x,x-b);
		ans+=2*y;
		c-=y;
		b+=y;
	}
	deb(ans)
  }
}