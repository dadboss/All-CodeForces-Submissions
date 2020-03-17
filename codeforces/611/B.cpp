#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll l,r;
	cin>>l>>r;
	ll i=2,ct=0,j,n,t;
	while(i<64)
	{
		n=1ll<<i;
		n--;
		j=0;
		while(j<i-1)
		{
			t=n-(1ll<<j);
			if(t<=r&&t>=l)
			{
				//cout<<t<<" ";
				ct++;
			}
			j++;
		}
		i++;
	}
	cout<<ct;
}