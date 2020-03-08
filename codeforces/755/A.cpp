#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll i=2,j;
	ll a[1000000]={};
	a[0]=a[1]=1;
	while(i<sqrt(1000000))
	{
		j=2*i;
		while(j<1000000)
		{
			a[j]++;
			j+=i;
		}
		i++;
	}
	ll n;
	cin>>n;
	i=1;
	while(1)
	{
		if(a[i*n+1])
		{
			cout<<i;
			return 0;
		}
		i++;
	}
}