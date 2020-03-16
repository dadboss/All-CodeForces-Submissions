#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,k;
	cin>>n>>k;
	if(n<k||__builtin_popcount(n)>k)
	cout<<"NO";
	else
	{
		priority_queue<ll> p;
		ll t=n;
		ll i=0;
		while(t)
		{	
			if(t%2)
				p.push(i);
			t/=2;
			i++;
		}
		while(p.size()<k)
		{
			if(p.top()==0)
				break;
			p.push(p.top()-1);p.push(p.top()-1);
			p.pop();
		}
		if(p.size()==k)
		{
			cout<<"YES\n";
			while(!p.empty())
			{
				t=1ll<<p.top();
				cout<<t<<" ";
				p.pop();
			}
		}
		else
		cout<<"NO";
	}
}