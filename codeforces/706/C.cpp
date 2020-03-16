#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,i;
	cin>>n;
	i=0;
	ll c[n];
	while(i<n)
	cin>>c[i++];
	string s[n];
	i=0;
	while(i<n)
	cin>>s[i++];
	ll dp[n][2];
	memset(dp,-1,sizeof(dp));
	dp[0][0]=0;
	dp[0][1]=c[0];
	i=1;
	string t=s[0],r,cp;
	while(i<n)
	{
		r=t;
		reverse(r.begin(),r.end());
		if(dp[i-1][0]!=-1&&s[i]>=s[i-1])
			dp[i][0]=dp[i-1][0];
		if(dp[i-1][1]!=-1&&s[i]>=r)
		{
			if(dp[i][0]==-1)
				dp[i][0]=dp[i-1][1];
			else
				dp[i][0]=min(dp[i][0],dp[i-1][1]);
		}
		cp=s[i];
		reverse(cp.begin(),cp.end());
		if(dp[i-1][0]!=-1&&cp>=s[i-1])
			dp[i][1]=c[i]+dp[i-1][0];
		if(dp[i-1][1]!=-1&&cp>=r)
			{
				if(dp[i][1]==-1)
					dp[i][1]=c[i]+dp[i-1][1];
				else
					dp[i][1]=min(dp[i][1],c[i]+dp[i-1][1]);
			}
		t=s[i];
	//	cout<<dp[i][0]<<" "<<dp[i][1]<<"\n"; 
		if(dp[i][0]==-1&&dp[i][1]==-1)
		{
			cout<<-1;
			return 0;
		}
		i++;
	}
	ll x=dp[n-1][0],y=dp[n-1][1];
	if(x!=-1&&y!=-1)
		cout<<min(x,y);
	else if(x!=-1)
		cout<<x;
	else
		cout<<y;
}