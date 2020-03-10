#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll pow(ll a, ll b, ll m=1000000007)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}
ll n,k,ct=0;
vector<ll> a[1000000];
ll v[1000000]={};
void dfs(ll n)
{
	if(v[n])
		return;
	v[n]++;
	ll i=0;
	ct++;
	while(i<a[n].size())
	{
		dfs(a[n][i]);
		i++;
	}
}
int main()
{
	ll x,i,l,r,w;
	cin>>n>>k;
	x=n-1;
	while(x--)
	{
		cin>>l>>r>>w;
		if(w==0){
		a[l].push_back(r);
		a[r].push_back(l);
		}
	}
	i=1;
	ll q=pow(n,k);
	while(i<=n)
	{
		if(v[i]==0)
		{
			ct=0;
			dfs(i);
		q -= pow(ct, k);
		q += 1000000007;
		q %= 1000000007;
		}
		i++;
	}
	cout<<q;
}