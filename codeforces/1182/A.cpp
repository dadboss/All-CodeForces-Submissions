#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first;
#define ss second
int main() {
	ll n;
	cin>>n;
	if(n&1)
	cout<<0;
	else
	cout<<(1ll<<(n/2));
}