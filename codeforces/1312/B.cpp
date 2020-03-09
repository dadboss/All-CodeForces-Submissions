#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		i=0;
		while(i<n)
		{
			cin>>a[i++];
		}
		sort(a,a+n,greater<int>());
		i=0;
		while(i<n)
		cout<<a[i++]<<" ";
		cout<<"\n";
	}
}