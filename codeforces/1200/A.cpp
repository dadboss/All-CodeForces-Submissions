#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll i,n,k;
	string s;
	cin>>n>>s;
	i=0;
	ll a[10]={};
	while(i<s.size())
	{
		if(s[i]=='L')
		{
			n=0;
			while(a[n]==1)
				n++;
			a[n]=1;
		}
		else if(s[i]=='R')
		{
			n=9;
			while(a[n]==1)
			n--;
			a[n]=1;
		}
		else
		a[s[i]-'0']=0;
		i++;
	}
	i=0;
	while(i<10)
	cout<<a[i++];
}