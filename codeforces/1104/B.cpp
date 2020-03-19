#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s;
	cin>>s;
	stack<char> a;
	ll i=0,ans=0;
	while(i<s.size())
	{
		//cout<<i<<" ";
		if(!a.empty()&&s[i]==a.top())
		{
			ans=1-ans;
			a.pop();
		}
		else
		{
			a.push(s[i]);
		}
		i++;
	}
	if(ans)
	cout<<"YES";
	else
	cout<<"NO";
}