#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,n,s,d,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s=x=0;
		while(n--)
		{
			cin>>d;
			s+=d;
			x^=d;
		}
		cout<<"2\n";
		cout<<x<<" "<<s+x<<"\n";
	}
}