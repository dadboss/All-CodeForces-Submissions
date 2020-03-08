#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll i=1;
	double ans=0;
	while(i<=n)
	{
		ans+=(1.0)/(1.0*i);
		i++;
	}
	cout<<fixed<<setprecision(5)<<ans;
}