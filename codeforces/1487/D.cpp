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
  	map<ll,ll> m;
  	m[0]=0;
  ll i=1,c,b,a[3];
  while(i*i<=10000000000)
  {
  	c=i*i+1;
  	c/=2;
  	b=c-1;
  	a[0]=i;
  	a[1]=b;
  	a[2]=c;
  	sort(a,a+3);
  	if(a[0]>0)
  		m[max({a[0],a[1],a[2]})]++;
  	i+=2;
  }
  ll smu=0;
  for(auto &x:m)
  	x.ss+=smu,smu=x.ss;
  ll n,t=1;
  cin>>t;
  while(t--)
  {
 	cin>>n;
 	if(m.find(n)!=m.end())
 		deb(m[n])
 	else
 	{
 		auto it=m.lower_bound(n);
 		it--;
 		n=it->ss;
 		deb(n)
 	}   
  }
}