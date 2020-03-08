#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,k,i,j,q,ans=0,x;
	cin>>n>>k;
	vector<vector<ll>> dp(k+1,vector<ll> (n+1,0));
	 i=1;
	while(i<=n)
	{
		dp[1][i]=1;
		i++;
	}
	i=1;
	while(i<k)
	{
		j=1;
		while(j<=n)
		{
			x=dp[i][j];
			q=j;
			while(q<=n)
			{
				dp[i+1][q]+=x;
				dp[i+1][q]%=1000000007;
				q+=j;
			}
			j++;
		}
		i++;
	}i=1;
	while(i<=n)
	{
		ans+=dp[k][i];
		ans%=1000000007;
		i++;
	}
	cout<<ans;
}