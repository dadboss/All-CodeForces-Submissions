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
  ll t=1,n,tot,i,tc,ct,ans,d;
  cin>>t;
  while(t--)
  {
  	map<ll,ll> m,M;
 	cin>>n;
 	i=n;
 	while(i--)
 	{
 		cin>>d;
 		M[d]++;
 	}   
 	for(auto x:M)
 		m[x.ss]++;
 	ct=tot=tc=0;
 	for(auto x:m)
 	{
 		tot+=x.ss*x.ff;
 		tc+=x.ss;
 		//deB(x.ff,x.ss)

 	}
 	ans=INT_MAX;
 	//deB(tot,tc)
 	ll pre=0;
 	for(auto x:m)
 	{
 		tc-=x.ss;
 		tot-=x.ff*x.ss;
 		//Deb(ct,tc,tot)
 		ans=min(ans,pre+tot-tc*x.ff);
 		pre+=x.ff*x.ss;
 		//deb(ans)
 	}
 	deb(ans)
  }
}
/*2 1
3 2*/