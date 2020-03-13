#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,l,r,c,ct=0;
ll a[100];
void f(ll i,ll j,ll *ar)
{
	if(i==n)
	{
		j--;
		ll sum=0,mi=INT_MAX,mx=INT_MIN;
		while(j>-1)
		{
			sum+=ar[j];
			mi=min(mi,ar[j]);
			mx=max(mx,ar[j]);
			j--;
		}
		if(sum>=l&&sum<=r&&mx-mi>=c)
		ct++;
		return;
	}
	ar[j]=a[i];
	f(i+1,j+1,ar);
	f(i+1,j,ar);
}
int main() {
	cin>>n>>l>>r>>c;
	ll i=0;
	while(i<n)
	cin>>a[i++];
	ll ar[100];
	f(0,0,ar);
	cout<<ct;
}