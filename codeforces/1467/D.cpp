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
#define N 5009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll dp[N][N],a[N],ans[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  	ll n,k,q,d;
  cin>>n>>k>>q;
  k++;
  ll i=1,j;
  while(i<=n)
  	{
  		cin>>a[i];
  		dp[i][1]=1;
  		i++;
  	}
  j=2;
  while(j<=k)
  {
  	i=1;
  	while(i<=n)
  	{
  		dp[i][j]=dp[i-1][j-1]+dp[i+1][j-1];
  		dp[i][j]%=mod;
  		i++;
  	}
  	j++;
  }
  i=1;
  while(i<=n)
  {
  	j=1;
  	while(j<=k)
  	{
  		ans[i]+=dp[i][j]*dp[i][k-j+1]%mod;
  		ans[i]%=mod;
  		j++;
  	}
  	i++;
  }
  ll sum=0;
  i=1;
  while(i<=n)
  {
  	//ans[i]=dp[i][k];
  	sum+=a[i]*ans[i]%mod;
  	sum%=mod;
  	i++;
  }
  //deb(sum)
  while(q--)
  {
  	cin>>d>>i;
  	sum+=ans[d]*(i-a[d]);
  	sum%=mod;
  	sum+=mod;
  	sum%=mod;
  	a[d]=i;
  	deb(sum)
  }
}		