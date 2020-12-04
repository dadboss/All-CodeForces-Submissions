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
  ll t=1,n,i,ans,mx,sum;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=ans=0;
  	while(i<n)
  		cin>>a[i++];
  	i=n-2;
  	while(i>-1)
  	{
  		ans+=abs(a[i]-a[i+1]);
  		i--;
  	}
  	i=1;
  	sum=LLONG_MAX;
  	while(i<n-1)
  	{
  		sum=min(sum,ans-abs(a[i]-a[i-1])-abs(a[i]-a[i+1])+abs(a[i+1]-a[i-1]));
  		i++;
  	}
  	sum=min({sum,ans-abs(a[n-1]-a[n-2]),ans-abs(a[0]-a[1])});
  	deb(sum)
  }
}