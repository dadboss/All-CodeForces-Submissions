#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t,a,b,n,x;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		x=2*(a+b);
		n=0;
		a=max(a,b);
		while(1)
		{
			if((n*n+n+x)%4==0&&(n*n+n+x)/4>=a)
			{
				cout<<n<<"\n";
				break;
			}
			n++;
		}
	}
}