#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define OK cout<<"OK";
ll n,m,a[5010],s[5010],dp[5010][5010];
ll f(ll i,ll k)
{
    if(dp[i][k]!=-1)
        return dp[i][k];
    if(k==0)
        return 0;
    if(i==n+1)
    {
        return LLONG_MIN;
    }
    if(k>n-i+1)
        return LLONG_MIN;
    ll op1=0;
    if(i+m<=n)
        op1=s[i+m]-s[i-1]+f(i+m+1,k-1);
    return dp[i][k]=max(op1,f(i+1,k));
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    memset(dp,-1,sizeof(dp));
    ll k,i;
    cin>>n>>m>>k;
    m--;
    i=1;
    s[0]=0;
    while(i<=n)
    {
        cin>>a[i];
        s[i]=a[i]+s[i-1];
        i++;
    }
    cout<<f(1,k);
}
