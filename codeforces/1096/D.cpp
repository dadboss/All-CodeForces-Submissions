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
string h="hard",s;
ll n,a[100009],dp[100009][5];
ll f(ll i,ll k)
{
    if(k==4)
    return 1e15;
  //deB(i,k)
  if(i==n)
    return 0;
  if(dp[i][k]!=-1)
    return dp[i][k];
  if(s[i]==h[k])
    {
      return dp[i][k]=min(a[i]+f(i+1,k),f(i+1,k+1));
    }
  return dp[i][k]=f(i+1,k);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  memset(dp,-1,sizeof(dp));
  cin>>n>>s;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  deb(f(0,0))
}