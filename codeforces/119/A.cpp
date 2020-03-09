#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	while(1)
	{
		if(c==0)
		{
			cout<<1;
			return 0;
		}
		c-=__gcd(a,c);
		if(c==0)
		{
			cout<<0;
			return 0;
		}
		c-=__gcd(b,c);
	}
}