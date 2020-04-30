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
ll ctr=0;
vector<ll> a[100009];
void dfs(ll n,ll p,ll d)
{
	if(a[n].size()==1&&d==1)
		ctr=1;
	for(auto x:a[n])
	{
		if(x!=p)
			dfs(x,n,1-d);
	}
}
void f(ll n,ll p)
{
	ll t=0;
	for(auto x:a[n])
	{
		if(x!=p)
		{
			f(x,n);
			if(a[x].size()==1)
				t++;
		}
	}
	if(t)
		ctr+=t-1;
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
  ll j,k=-1;
  vector<ll> z;
  while(i<=n)
  {
  	if(a[i].size()==1)
  		{
  			z.pb(i);
  			k=i;
  		}
  	else
  		j=i;
  	i++;
  }
  dfs(k,-1,0);
  if(ctr)
  	cout<<"3 ";
  else
  	cout<<"1 ";
  ctr=0;
  f(j,-1);
  cout<<n-1-ctr;
}