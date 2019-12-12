#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,a,b,m=0,e=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
		m++;
		else if(b>a)
		e++;
	}
	if(m>e)
	cout<<"Mishka";
	else if(m==e)
	cout<<"Friendship is magic!^^";
	else cout<<"Chris";
}