#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,x,j,i=1;
	cin>>n;
	ll a[n+1];
	while(i<=n)
	{
		cin>>x;
		a[i]=x;
		i++;
	}
	i=1;
	while(i<=n)
	{
		ll v[n+1]={};
		j=i;
		while(v[j]==0)
		{
			v[j]++;
			j=a[j];
		}
		i++;
		cout<<j<<" ";
	}
}