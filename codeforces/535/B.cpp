#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s;
	cin>>s;
	ll ans=0,t=0,i=s.size()-1;
	while(i>-1)
	{
		if(s[i]=='7')
			ans+=(1<<t);
		i--;
		t++;
	}
	cout<<ans+1+2*((1<<(s.size()-1))-1);
}