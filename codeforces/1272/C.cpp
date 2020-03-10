#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,j,i,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll a[26]={};
	char c;
	while(k--)
	{
	//	cout<<k<<" "; 
		cin>>c;
	//	cout<<c-'a'<<" "; 
		a[c-'a']++;
	}
//	cout<<s;
	 i=0;
	ll ans=0;
	while(i<s.size())
	{
		j=0;
		while(i<s.size()&&a[s[i]-'a'])
		{
			i++;
			j++;
		}
		ans+=j*(j+1)/2;
		i++;
	}
	cout<<ans;
}