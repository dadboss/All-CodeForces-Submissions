#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
ll p=100000000;
ll k1,k2;
ll dp[101][101][11][11];
ll f(ll n1,ll n2,ll K1,ll K2)
{
	if(dp[n1][n2][K1][K2]!=-1)
		return dp[n1][n2][K1][K2];
	if(n1==0&&n2==0)
		return 1;
	ll ans=0;
	if(K1&&n1)
		ans+=f(n1-1,n2,K1-1,k2);
	if(K2&&n2)
		ans+=f(n1,n2-1,k1,K2-1);
	return dp[n1][n2][K1][K2]=ans%p;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    memset(dp,-1,sizeof(dp));
    ll n1,n2;
    cin>>n1>>n2>>k1>>k2;
    cout<<f(n1,n2,k1,k2);
}