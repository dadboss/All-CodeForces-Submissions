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
ll a[200009],dp[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,p,k,ans,i;
  cin>>t;
  while(t--)
  {
      ans=0;
    cin>>n>>p>>k;
    i=1;
    while(i<=n)
      {
          cin>>a[i];
          i++;
      }
    sort(a+1,a+n+1);
    i=1;
    dp[0]=0;
    while(i<=n)
    {
      dp[i]=dp[i-1]+a[i];
      if(i-k>-1)
        dp[i]=min(dp[i],dp[i-k]+a[i]);
      if(dp[i]<=p)
        ans=i;
      i++;
    }
    deb(ans);
  }
}
/*
1
4 6 4
3 2 3 2
*/
