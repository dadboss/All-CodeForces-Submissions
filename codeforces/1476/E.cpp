#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
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
#define N 100009
#define NL NULL
ll k,j,f;
string p;

struct node
{
	ll e;
	node* a[27];
	node()
	{
		ll i=0;	
		while(i<27)
		{
			a[i]=NL;
			i++;
		}
		e=-1;
	}
};
vi v;
void fd(ll i,node *tr)
{
	if(i==k-1)
	{
		if(tr->a[26]!=NL)
		 {
		 	if(tr->a[26]->e==j)
		 		f=-1;
		 	v.pb(tr->a[26]->e);		
		 }
		if(tr->a[p[i]-'a']!=NL)
		 {
		 	v.pb(tr->a[p[i]-'a']->e);
		 	if(tr->a[p[i]-'a']->e==j)
		 		f=-1;
		 }
		return;
	}
	if(tr->a[26]!=NL)
		fd(i+1,tr->a[26]);		
	if(tr->a[p[i]-'a']!=NL)
		fd(i+1,tr->a[p[i]-'a']);
	return;
}
vi g[N];
vi tp;
ll vis[N];
void dfs(ll n)
{
	if(vis[n]==1)
	{
		NO
		exit(0);
	}
	if(vis[n])
		return;
	vis[n]=1;
	for(auto x:g[n])
		dfs(x);
	tp.pb(n);
	vis[n]=2;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>n>>m>>k;
  node *t; 
  t=new node();
  string s[n+1];
  ll i=1;
  while(i<=n)
  {
  	cin>>s[i];
  	node* tr=t;
  	for(auto c:s[i])
  		{
  			if(c=='_')
  			{
  				if(tr->a[26]==NL)
  					tr->a[26]=new node();
  				tr->a[26]->e=i;
  				tr=tr->a[26];
  			}
  			else
  			{
  				if(tr->a[c-'a']==NL)
  					tr->a[c-'a']=new node();
  				tr->a[c-'a']->e=i;
  				tr=tr->a[c-'a'];
  			}
  		}
  	i++;
  }
  i=1;
  while(i<=m)
  {
  	cin>>p>>j;
  	node* tr=t;
  	f=0;
  	v.clear();
  	fd(0,tr);
  	if(f==0)
  	{
  		NO
  		reto;
  	}
  	for(auto x:v)
	  	if(x!=j)
	  		g[j].pb(x);
  	i++;
  }
  i=1;
  while(i<=n)
  {
  	if(vis[i]==0)
  		dfs(i);
  	i++;
  }
  reverse(all(tp));
  YES
  for(auto x:tp)
  	cout<<x<<" "; 
}