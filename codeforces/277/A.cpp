#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll q[1000000],v[1000000]={};
vector<ll> a[1000000];
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
	ll d,i,j,n,k,z=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>d;
		if(d==0)
		z++;
		i=0;
		while(i<d)
		{
			cin>>q[i];
			j=i;
			while(j>-1)
			{
				a[q[j]].push_back(q[i]);
				a[q[i]].push_back(q[j]);
				j--;
			}
			i++;
		}
	}
	i=1;
	ll ct=0;
	while(i<=k)
	{
		//cout<<i<<" "<<a[i].size()<<"\n";
		if(a[i].size()&&v[i]==0)
		{
			ct++;
			dfs(i);
		}
		i++;
	}
//	cout<<ct<<" "<<z<<" ";
	if(ct)
	cout<<ct-1+z;
	else
	cout<<z;
}