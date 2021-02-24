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
ll n[4],a[4][150009],m[4];
vi g[4][N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll i=0;
  while(i<4)
  	cin>>n[i++];
  i=0;
  ll j;
  while(i<4)
  {
  	j=1;
  	while(j<=n[i])
  		{
  			cin>>a[i][j];
  			j++;
  		}
  	i++;
  }
  ll l,r;
  i=0;
  while(i<3)
  {
  	cin>>m[i];
  	j=0;
  	while(j<m[i])
  	{
  		cin>>l>>r;
  		g[i][l].pb(r);
  		//g[i][r].pb(l);
  		j++;
  	}
  	i++;
  }
  set<pi> s;
  j=1;
  while(j<=n[3])
  {
  	s.insert({a[3][j],j});
  	j++;
  }
  i=2;
  ll ans=1e12;
  while(i>-1)
  {
  	j=1;
  	set<pi> S;
  	while(j<=n[i])
  	{
  		vi v;
  		for(auto x:g[i][j])
  			if(s.find({a[i+1][x],x})!=s.end())
  				s.erase({a[i+1][x],x}),v.pb(x);
		if(!s.empty())
			{
				a[i][j]+=s.begin()->ff;
				S.insert({a[i][j],j});
				if(i==0)
					ans=min(ans,a[i][j]);
			}
		for(auto x:v)
			s.insert({a[i+1][x],x});
  		j++;
  	}
  	s=S;
  	/*deb(s.size())
  	for(auto x:s)
  		deB(x.ff,x.ss)*/
  	i--;
  }
  if(ans==1e12)
  	ans=-1;
  deb(ans)
}