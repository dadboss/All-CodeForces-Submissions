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
ll ch[1100],cd[1100];
string s[1100];
ll dp[1100][2];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,x,y,j,ct,st,e,ans;
  cin>>n>>m>>x>>y;
  ll i=1;
  while(i<=n)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  i=1;
  while(i<=m)
  {
    j=1;
    ct=0;
    while(j<=n)
    {
      if(s[j][i]=='.')
        ct++;
      j++;
    }
    cd[i]=cd[i-1]+ct;
    ch[i]=ch[i-1]+n-ct;
    i++;
  }
  i=1;
  while(i<=m)
  {
    //deb(i);
    st=max(1ll,i-y+1);
    e=max(1ll,i-x+1);
    ans=LLONG_MAX;
    while(st<=e)
    {
      if((st-1==0||st-1>=x)&&dp[st-1][1]!=LLONG_MAX)
      ans=min(ans,dp[st-1][1]+ch[i]-ch[st-1]);
      st++;
    }
    dp[i][0]=ans;
    st=max(1ll,i-y+1);
    e=max(1ll,i-x+1);
    ans=LLONG_MAX;
    while(st<=e)
    {
      if((st-1==0||st-1>=x)&&dp[st-1][0]!=LLONG_MAX)
      ans=min(ans,dp[st-1][0]+cd[i]-cd[st-1]);
      st++;
    }
    dp[i][1]=ans;
    //deB(dp[i][0],dp[i][1]);
    i++;
  }
  deb(min(dp[m][0],dp[m][1]));

}