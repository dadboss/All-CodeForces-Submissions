#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	if(n%2)
	cout<<0;
	else
	{
		n/=2;
		if(n%2)
			cout<<n/2;
		else
		cout<<n/2-1;
	}
}