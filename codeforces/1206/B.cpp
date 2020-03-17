#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,d,sum=0,z=0,c=0;
	cin>>n;
	while(n--)
	{
		cin>>d;
		if(d>=1)
			sum+=d-1;
		else if(d<=-1)
			{
				sum+=-1-d;
				c++;
			}
		else z++;
	}
	if(z==0)
	{
		if(c%2==0)
			cout<<sum;
		else
			cout<<sum+2;
	}
	else
	{
		cout<<sum+z;
	}
}