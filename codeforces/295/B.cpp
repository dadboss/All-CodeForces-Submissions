#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,t,sum,k;
	cin>>n;
	ll a[n+1][n+1],s[n+1];
	ll i=1,j;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cin>>a[i][j];
			j++;
		}
		i++;
	}
	i=0;
	while(i<n)
	{
		cin>>s[i++];
	}
	ll q=n-1;
	ll f[n+1]={};
	ll ans[n+1];
	while(q>-1)
	{
		t=s[q];
		sum=0;
		f[t]++;
		i=1;
		while(i<=n)
		{
		    //cout<<i<<" ";
			j=1;
			while(j<=n)
			{
				a[i][j]=min(a[i][j],a[i][t]+a[t][j]);
				if(f[i]&&f[j])
					sum+=a[i][j];
				j++;
			}
			i++;
		}
		ans[q]=sum;
		q--;
	}
	i=0;
	while(i<n)
	cout<<ans[i++]<<" ";
}
