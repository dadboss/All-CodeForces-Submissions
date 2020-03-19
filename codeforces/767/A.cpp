#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100001];
int main()
{
	ll n,d,p;
	cin>>n;
	p=n;
	while(n--)
	{
		cin>>d;
		a[d]++;
		while(p&&a[p])
		{
			cout<<p<<" ";
			p--;
		}
		cout<<"\n";
	}
}