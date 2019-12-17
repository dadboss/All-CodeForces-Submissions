#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t,i,z,e,m;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		i=0;
		z=0;
		m=0;
		e=0;
		while(i<s.size())
		{
			if(z==0&&s[i]=='0')
			z++;
			else
			{
				m+=s[i]-'0';
				m%=3;
				if((s[i]-'0')%2==0)
				e++;
			}
			i++;
		}
		m=m%3;
		if((z&&e&&m==0))
		cout<<"red\n";
		else
		cout<<"cyan\n";
	}
}