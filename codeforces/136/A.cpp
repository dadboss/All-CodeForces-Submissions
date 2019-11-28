#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i=1;
	cin>>n;
	int a[n+1],b[n+1];
	while(i<=n)
	{
		cin>>a[i];
		b[a[i]]=i;
		i++;
	}
	i=1;
	while(i<=n)
	cout<<b[i++]<<" ";
}