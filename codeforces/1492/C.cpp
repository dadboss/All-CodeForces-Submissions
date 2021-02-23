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
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  string s,t;
  cin>>n>>m>>s>>t;
  ll i=1;
  set<ll> S[26];
  while(i<=n)
  {
  	S[s[i-1]-'a'].insert(i);
  	i++;
  }
  i=1;
  while(i<=m)
  {
  	auto u=S[t[i-1]-'a'].lower_bound(a[i-1]);
  	a[i]=*u;
  	S[t[i-1]-'a'].erase(u);
  	i++;
  }
  ll ans=0;
  i=2;
  while(i<=m)
  {
  	ans=max(ans,a[i]-a[i-1]);
  	i++;
  }
  a[m+1]=INT_MAX;
  i=m;
  while(i>1)
  {
  	if(S[t[i-1]-'a'].empty())
  	{

  	}
  	else
  	{
  		auto u=S[t[i-1]-'a'].lower_bound(a[i+1]);
  		if(u==S[t[i-1]-'a'].begin())
  		{

  		}
  		else
  		{
  			u--;
  			if(*u>a[i])
  			{
	  			S[t[i-1]-'a'].insert(a[i]);
	  			a[i]=*u;
	  			ans=max(ans,a[i]-a[i-1]);
	  			S[t[i-1]-'a'].erase(u);
	  		//	deB(i,a[i])
	  		}
  		}
  	}
  	i--;
  }
  deb(ans)
}
/*a a b b b b a a a b  b  a  b
1 2 3 4 5 6 7 8 9 10 11 12 13*/