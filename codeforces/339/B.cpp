#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll i=1,s=0,n,m,d;
	cin>>n>>m;
	while(m--)
	{
		cin>>d;
		if(d>=i)
		s+=d-i;
		else
		s+=n-(i-d);
		i=d;
	}
	cout<<s;
}