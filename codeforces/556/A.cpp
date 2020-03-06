#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	string s;
	cin>>n>>s;
	ll i=0,o=0,z=0;
	while(i<n)
	{
		if(s[i]=='0')
		z++;
		else
		o++;
		i++;
	}
	cout<<n-2*min(z,o);
}