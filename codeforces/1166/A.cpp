#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll x,i=0,ans=0,n,a[26]={};
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		a[s[0]-'a']++;
	}
	while(i<26)
	{
		if(a[i]%2)
		{
			x=a[i]/2;
			ans+=x*(x-1)/2;
			x++;
			ans+=x*(x-1)/2;
		}
		else
		{
			x=a[i]/2;
			ans+=x*(x-1);
		}
		i++;
	}
	cout<<ans;
}