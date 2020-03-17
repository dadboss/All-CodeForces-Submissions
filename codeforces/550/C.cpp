#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll a[1001]={};
	ll j,k,i=0;
	while(i<1001)
	{
		a[i]++;
		i+=8;
	}
	string s;
	cin>>s;
	i=0;
	while(i<s.size())
	{
		if(a[s[i]-'0'])
		{
			cout<<"YES\n";
			cout<<s[i];
			return 0;
		}
		j=i+1;
		while(j<s.size())
		{
			if(a[10*(s[i]-'0')+s[j]-'0'])
			{
				cout<<"YES\n"<<10*(s[i]-'0')+s[j]-'0';
				return 0;
			}
			k=j+1;
			while(k<s.size())
			{
				if(a[100*(s[i]-'0')+10*(s[j]-'0')+s[k]-'0'])
				{
					cout<<"YES\n"<<100*(s[i]-'0')+10*(s[j]-'0')+s[k]-'0';
					return 0;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	cout<<"NO";
}