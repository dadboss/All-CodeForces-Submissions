#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i=1;
	cin>>n;
	int a[n];
	cin>>a[0];
	int mn=0,mx=0;
	while(i<n)
	{
		cin>>a[i];
		if(a[i]<=a[mn])
			mn=i;
		if(a[i]>a[mx])
			mx=i;
		i++;
	}
	//cout<<mx<<" "<<mn;
	if(mx<mn)
	cout<<mx+n-mn-1;
	else
	cout<<mx+n-mn-2;
}