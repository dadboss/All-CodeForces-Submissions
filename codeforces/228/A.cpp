#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a,i=0;
	unordered_set<long long> s;
	while(i<4)
	{
		cin>>a;
		s.insert(a);
		i++;
	}
	cout<<4-s.size();
}