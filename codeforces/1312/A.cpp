#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n%m)
		{
			cout<<"NO\n";
		}
		else
		cout<<"YES\n";
	}
}