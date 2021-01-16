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
#define inf 1e16
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
vpi a[N];
ll d[N][4];
//set<pair<ll,pi>> s;
priority_queue<pair<ll,pi>,vector<pair<ll,pi>>,greater<pair<ll,pi>>> s;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll n,m,l,r,w;
  cin>>n>>m;
  while(m--)
  {
  	cin>>l>>r>>w;
  	a[l].pb({r,w});
  	a[r].pb({l,w});
  }
  ll j,i=1;
  while(i<=n)
  {
  	j=0;
  	while(j<4)
  	{
  		d[i][j]=inf;
  		j++;
  	}
  	i++;
  }
  ll di,v,u,t;
  s.push({0,{1,0}});
  d[1][0]=0;
  while(!s.empty())
  {
  	auto it=s.top();
  	s.pop();
  	di=it.ff;
  	u=it.ss.ff;
  	t=it.ss.ss;
  	if(d[u][t]!=di)
  		cont;
  	for(auto x:a[u])
  	{
  		v=x.ff;
  		w=x.ss;
  		if(t==0)
  		{
  			if(d[v][0]>di+w)
  			{
  				d[v][0]=di+w;
  				s.push({d[v][0],{v,0}});
  			}
  			if(d[v][1]>di)
  			{
  				d[v][1]=di;
  				s.push({d[v][1],{v,1}});
  			}
  			if(d[v][2]>di+2*w)
  			{
  				d[v][2]=di+2*w;
  				s.push({d[v][2],{v,2}});
  			}
  		}
  		else if(t==1)
  		{
  			if(d[v][1]>di+w)
  			{
  				d[v][1]=di+w;
  				s.push({d[v][1],{v,1}});
  			}
  			if(d[v][3]>di+2*w)
  			{
  				d[v][3]=di+2*w;
  				s.push({d[v][3],{v,3}});
  			}	
  		}
  		else if(t==2)
  		{
  			if(d[v][2]>di+w)
  			{
  				d[v][2]=di+w;
  				s.push({d[v][2],{v,2}});
  			}
  			if(d[v][3]>di)
  			{
  				d[v][3]=di;
  				s.push({d[v][3],{v,3}});
  			}	
  		}
  		else if(t==3)
  		{
  			if(d[v][3]>di+w)
  			{
  				d[v][3]=di+w;
  				s.push({d[v][3],{v,3}});
  			}	
  		}
  	}
  }
  i=2;
  while(i<=n)
  {
  	cout<<min(d[i][0],d[i][3])<<" ";
  	i++;
  }
}