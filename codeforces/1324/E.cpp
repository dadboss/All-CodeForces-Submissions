#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,h,l,r,a[3000];
ll dp[2001][2001];
ll f(ll i,ll sum)
{
	sum%=h;
	if(i==n)
	{
		if(sum>=l&&sum<=r)
			return 1;
		return 0;
	}
	if(dp[i][sum]!=-1)
		return dp[i][sum];
	if(sum>=l&&sum<=r)
	return dp[i][sum]=1+max(f(i+1,sum+a[i]),f(i+1,sum+a[i]-1));
	return dp[i][sum]=max(f(i+1,sum+a[i]),f(i+1,sum+a[i]-1));
}
int main() {
	memset(dp,-1,sizeof(dp));
	cin>>n>>h>>l>>r;
	ll i=0;
	while(i<n)
	{
		cin>>a[i++];
	}
	cout<<max(f(1,a[0]),f(1,a[0]-1));
}