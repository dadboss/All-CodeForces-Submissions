#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll a[n];
	ll i=0,p,ans=1;
	while(i<n)
	{
		cin>>a[i++];
	}
	i=0;
	while(i<n&&a[i]!=1)
	i++;
	p=i;
	if(p==n)
	cout<<0;
	else{
	i++;
	while(i<n)
	{
		if(a[i]==1)
		{
			ans*=i-p;
			p=i;
		}
		i++;
		
	}
	cout<<ans;
	}
}