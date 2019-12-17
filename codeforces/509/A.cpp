#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll a[n][n];
	ll i=0,j;
	while(i<n)
	{
		a[0][i]=1;
		a[i][0]=1;
		i++;
	}
	i=1;
	while(i<n)
	{
		j=1;
		while(j<n)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
			j++;
		}
		i++;
	}
	cout<<a[n-1][n-1];
}