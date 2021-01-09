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
#define N 2009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s[N];
ll d[N][N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  	ll n,m,i,j;
  cin>>n>>m;
  i=1;
  while(i<=n)
  {
  	cin>>s[i];
  	s[i]='!'+s[i];
  	i++;
  }
  queue<pi> q;
  i=1;
  ll ans=0;
  while(i<=n)
  {
  	j=1;
  	while(j<=m)
  	{
  		if(i==1||j==1||i==n||j==m||s[i][j]!=s[i-1][j]||s[i][j]!=s[i][j-1]||s[i][j]!=s[i+1][j]||s[i][j]!=s[i][j+1])
  		{
  			ans++;
  			d[i][j]=1;
  			q.push({i,j});
  		}
  		j++;
  	}
  	i++;
  }
  ll x,y;
  while(!q.empty())
  {
  	i=q.front().ff;
  	j=q.front().ss;
  	q.pop();
  	x=i-1;
  	y=j;
  	if(x>=1&&x<=n&&y>=1&&y<=m&&d[x][y]==0)
  	{
  		d[x][y]=1+d[i][j];
  		ans+=d[x][y];
  		q.push({x,y});
  	}
  	x=i+1;
  	y=j;
  	if(x>=1&&x<=n&&y>=1&&y<=m&&d[x][y]==0)
  	{
  		d[x][y]=1+d[i][j];
  		ans+=d[x][y];
  		q.push({x,y});
  	}
  	x=i;
  	y=j-1;
  	if(x>=1&&x<=n&&y>=1&&y<=m&&d[x][y]==0)
  	{
  		d[x][y]=1+d[i][j];
  		ans+=d[x][y];
  		q.push({x,y});
  	}
  	x=i;
  	y=j+1;
  	if(x>=1&&x<=n&&y>=1&&y<=m&&d[x][y]==0)
  	{
  		d[x][y]=1+d[i][j];
  		ans+=d[x][y];
  		q.push({x,y});
  	}
  }
  deb(ans)
}