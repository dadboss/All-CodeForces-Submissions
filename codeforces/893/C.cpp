#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll p[1000000],v[1000000]={};
vector<ll> a[1000000];
ll dfs(ll n)
{
	if(v[n])
	return INT_MAX;
	v[n]++;
	ll m=p[n];
	ll i=0;
	while(i<a[n].size())
	{
		m=min(m,dfs(a[n][i]));
		i++;
	}
	return m;
}
int main() {
	ll i,l,r,n,m;
	cin>>n>>m;
	i=1;
	while(i<=n)
	{
		cin>>p[i++];
	}
	while(m--)
	{
		cin>>l>>r;
		a[l].pb(r);
		a[r].pb(l);
	}
	ll ans=0;
	 i=1;
	while(i<=n)
	{
		if(v[i]==0)
		{
			//cout<<i<<" ";
			ans+=dfs(i);
		}
		i++;
	}
	cout<<ans;
}
