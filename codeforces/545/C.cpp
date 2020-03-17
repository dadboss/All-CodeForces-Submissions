#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first;
#define ss second
int main() {
	ll d,n;
	cin>>n;
	ll h[n],x[n];
	ll i=0;
	while(i<n)
	{
		cin>>x[i]>>h[i];
		i++;
	}
	ll ct=2;
	i=1;
	ll l=x[0];
	while(i<n-1)
	{
		if(x[i]-h[i]>l)
		{
			ct++;
			l=x[i];
		}
		else if(x[i]+h[i]<x[i+1])
		{
			ct++;
			l=x[i]+h[i];
		}
		else
		{
			l=x[i];
		}
		i++;
	}
	if(n==1)
	cout<<ct-1;
	else
	cout<<ct;
}