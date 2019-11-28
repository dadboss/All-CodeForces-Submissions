#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,q;
	cin>>s>>q;
	reverse(s.begin(),s.end());
	if(s==q)
	cout<<"YES";
	else
	cout<<"NO";
}