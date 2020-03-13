#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m,k,i,s;
	cin>>n>>m>>k;
	ll a[m];
	i=0;
	while(i<m)
	{
		cin>>a[i++];
	}
	cin>>s;
	i=0;
	ll ct=0;
	while(i<m)
	{
		if(__builtin_popcount(a[i]^s)<=k)
		ct++;
		i++;
	}
	cout<<ct;
}