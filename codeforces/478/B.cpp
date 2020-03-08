#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m;
	cin>>n>>m;
	ll l,x,y,ans;
	l=(n/m+1);
	ans=l*(l-1)/2;
	ans*=n%m;
	y=m-(n%m);
	ans+=y*(n/m)*(n/m-1)/2;
	cout<<ans<<" ";
	x=n-m+1;
	cout<<x*(x-1)/2;
}