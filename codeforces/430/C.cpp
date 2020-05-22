#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
vector<ll> v;
vector<ll> q;
vector<ll> a[100009];
vector<ll> ans;
ll par[100009],h[100009],b[100009],c[100009];
void dfs(ll n,ll p,ll d,bool c0,bool c1)
{
	par[n]=p;
	//deb(n)
	if(d)
	{
		if(c1)
		{
			if(b[n]==c[n])
			{
				ans.pb(n);
				c1=0;
			}
		}
		else
		{
			if(b[n]!=c[n])
			{
				ans.pb(n);
				c1=1;
			}
		}
	}
	else
	{
		if(c0)
		{
			if(b[n]==c[n])
			{
				ans.pb(n);
				c0=0;
			}
		}
		else
		{
			if(b[n]!=c[n])
			{
				ans.pb(n);
				c0=1;
			}
		}	
	}
	for(auto x:a[n])
		if(x!=p)
			dfs(x,n,1-d,c0,c1);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r;
  cin>>n;
  ll i=0;
  while(i<n-1)
  {
  	cin>>l>>r;
  	a[l].pb(r);
  	a[r].pb(l);
  	i++;
  }
  i=1;
  while(i<=n)
	cin>>b[i++];
  i=1;
  while(i<=n)
  	cin>>c[i++];
  dfs(1,-1,0,0,0);
  deb(ans.size());
  for(auto x:ans)
  	deb(x)
}