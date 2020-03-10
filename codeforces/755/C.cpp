#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll ct=0,v[100000]={};
vector<ll> a[100000];
void dfs(ll n)
{
	if(v[n])
	 return;
	v[n]++;
	ll i=0;
	while(i<a[n].size())
	{
		dfs(a[n][i]);
		i++;
	}
}
int main() {
	ll n,i,d;
	cin>>n;
	i=1;
	while(i<=n)
	{
		cin>>d;
		a[d].push_back(i);
		a[i].push_back(d);
		i++;
	}
	i=1;
	while(i<=n)
	{
		if(v[i]==0)
		{
			ct++;
			dfs(i);
		}
		i++;
	}
	cout<<ct;
}
