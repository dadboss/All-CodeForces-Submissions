#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i=0,l=0;
	string s;
	cin>>n;
	while(i<n)
	{
		cin>>s;
		if(s[1]=='-')
		l++;
		else
		l--;
		i++;
	}
	cout<<-l;
}