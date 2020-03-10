#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m,l,r,i;
	cin>>n>>m;
	ll a[n+1]={};
	while(m--)
	{
		cin>>l>>r;
		a[l]++;
		a[r]++;
	}
	i=1;
	while(i<=n)
	{
		if(a[i]==0)
		{
			m=i;
			break;
		}
		i++;
	}
	i=1;
	cout<<n-1<<"\n";
	while(i<=n)
	{
		if(i!=m)
		{
			cout<<i<<" "<<m<<"\n";
		}
		i++;
	}
}