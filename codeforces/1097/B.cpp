#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[100];
bool f(ll i,ll sum)
{
	if(i==n)
	{
		if(sum%360)
		return 0;
		return 1;
	}
	return f(i+1,sum+a[i])||f(i+1,sum-a[i]);
}
int main() {
	cin>>n;
	ll i=0;
	while(i<n)
	{
		cin>>a[i++];
	}
	if(f(0,0))
	cout<<"YES";
	else
	cout<<"NO";
}