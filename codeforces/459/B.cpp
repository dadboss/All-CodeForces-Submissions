#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	unordered_map<ll,ll> a;
	ll d,n;
	cin>>n;;
	ll i=0;
	ll mn=INT_MAX,mx=INT_MIN;
	while(i<n)
	{
		cin>>d;
		a[d]++;
		mn=min(d,mn);
		mx=max(d,mx);
		i++;
	}
	cout<<mx-mn<<" ";
	if(mx!=mn)
	cout<<a[mx]*a[mn];
	else
	cout<<(a[mx]*(a[mx]-1))/2;
}