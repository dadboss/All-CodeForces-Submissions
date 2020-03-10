#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ll n;
	cin>>n;
	string s[n];
	ll i=0;
	while(i<n)
	{
		cin>>s[i];
		i++;
	}
	i=0;
	ll ans=0,c,j;
	while(i<n)
	{
		j=0;
		c=0;
		while(j<n)
		{
			if(s[i][j]=='C')
				c++;
			j++;
		}
	//	cout<<c<<" ";
		ans+=(c*(c-1)/2);
		j=0;
		c=0;
		while(j<n)
		{
			if(s[j][i]=='C')
				c++;
			j++;
		}
	//	cout<<c<<"\n";
		ans+=(c*(c-1)/2);
		i++;
	}
	cout<<ans;
}
