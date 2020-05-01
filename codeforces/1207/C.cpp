#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll n,a,b,dp[200009][2];
string s;
ll f(ll i,ll p)
{
	if(dp[i][p]!=-1)
		return dp[i][p];
	if(i==n-1)
	{
		if(p==1)
			return a;
		return 0;
	}
	if(s[i]=='0')
	{
		if(p==0)
		{
			return dp[i][p]=f(i+1,0);
		}
		return dp[i][p]=min(a+f(i+1,0),b+f(i+1,1));
	}
	if(p==0)
		return dp[i][p]=a+b+b+f(i+1,1);
	return dp[i][p]=b+f(i+1,1);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t;
  cin>>t;
  while(t--)
  {
  	cin>>n>>a>>b>>s;
  	memset(dp,-1,sizeof(dp));
  	deb(n*a+(n+1)*b+f(1,0));
  }
}