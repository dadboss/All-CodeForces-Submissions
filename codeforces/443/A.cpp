#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int i=1,a[26]={0},c=0;
	while(i<s.size())
	{
		//cout<<s[i]<<" ";
		if(s[i]<='z'&&s[i]>='a')
		{
			a[s[i]-'a']++;
			if(a[s[i]-'a']==1)
			c++;
		}
		i++;
	}
	cout<<c;
}