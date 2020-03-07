#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll d,o=0,e=0;
	while(n--)
	{
		cin>>d;
		if(d%2)
		o++;
		else
		e++;
	}
	cout<<min(e,o);
}