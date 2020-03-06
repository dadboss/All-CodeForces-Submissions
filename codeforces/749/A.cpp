#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,i;
	cin>>n;
	cout<<n/2<<"\n";
	if(n%2)
	{
		i=1;
		while(i<n/2)
		{
			cout<<"2 ";
			i++;
		}
		cout<<"3";
	}
	else
	{
		i=0;
		while(i<n/2)
		{
			cout<<"2 ";
			i++;
		}
	}
}