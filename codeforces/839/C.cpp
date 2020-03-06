
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[1000000];
double ans =0.0;
void dfs(double p,ll d,ll n,ll b)
{
	ll t=0,i=0;
	while(i<v[n].size())
	{
		if(v[n][i]!=b)
			t++;
		i++;
	}
	i=0;
	while(i<v[n].size())
	{
		if(v[n][i]!=b)
		dfs(p/t,d+1,v[n][i],n);
		i++;
	}
	if(t==0)
	ans+=p*d;
}
int main() {
	ll x,a,b,n;
	cin>>n;
	x=n-1;
	while(x--)
	{
		cin>>a>>b;
		a--;
		b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1.0,0,0,0);
	//ans/=2.0;
	cout<<fixed<<setprecision(7)<<ans;
}
