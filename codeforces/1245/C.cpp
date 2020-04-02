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
ll m=1000000007;
string s;
ll dp[100009]={};
ll f(ll i)
{

    if(i>=s.size())
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    if(s[i]=='w'||s[i]=='m')
    {
        cout<<0;
        exit(0);
    }
    if((s[i]=='u'&&s[i+1]=='u')||(s[i]=='n'&&s[i+1]=='n'))
    {
        return dp[i]=(1+f(i+1)%m+f(i+2)%m)%m;
    }
    return dp[i]=f(i+1)%m;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    memset(dp,-1,sizeof(dp));
    cin>>s;
    s+='.';
    cout<<(1+f(0))%m;
}
