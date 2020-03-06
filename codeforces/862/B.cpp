#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[1000000];
vector<ll> e,o;
void dfs(bool t,ll n,ll p)
{
	if(t)
		o.push_back(n);
	else
		e.push_back(n);
	ll i=0;
	while(i<v[n].size())
	{
		if(v[n][i]!=p)
			dfs(1-t,v[n][i],n);
		i++;
	}
}
int main() {
	ll a,b,n;
	cin>>n;
	ll i=0;
	while(i<n-1)
	{
		cin>>a>>b;
		v[b].push_back(a);
		v[a].push_back(b);
		i++;
	}
	dfs(0,1,0);
	i=0;
	ll sum=0;
	while(i<e.size())
	{
		sum+=o.size()-v[e[i]].size();
		i++;
	}
	cout<<sum;
}