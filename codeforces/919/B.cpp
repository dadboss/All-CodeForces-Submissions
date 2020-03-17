#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,t,ct=0;
	cin>>n;
	ll i=0,k;
	while(1)
	{
		k=0;
		t=i;
		while(t)
		{
			k+=t%10;
			t/=10;
		}
		if(k==10)
			ct++;
		if(ct==n)
		{
			cout<<i;
			return 0;
		}
		i++;
	}
}