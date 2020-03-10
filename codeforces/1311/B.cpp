#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200001];
int main() {
	ll t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll b[200005]={};
		i=0;
		while(i<n)
		{
			cin>>a[i++];
		}
		i=0;
		while(i<m)
		{
			cin>>j;
			j--;
			b[j]++;
			i++;
		}
		i=0;
		while(i<200005)
		{
			if(b[i])
			{
				j=i;
				while(b[i])
				i++;
				//cout<<j<<" "<<i<<"\n";
				sort(a+j,a+i+1);
			}
			i++;
		}
		i=1;
		while(i<n)
		{
			if(a[i]<a[i-1])
			{
				cout<<"NO\n";
				break;
			}
			i++;
		}
		if(i==n)
		{
			cout<<"YES\n";
		}
	}
}
