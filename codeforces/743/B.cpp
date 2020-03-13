#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,k;
	cin>>n>>k;
	n=1;
	while(!(k%2))
	{
		k>>=1;
		n++;
	}
	cout<<n;
}