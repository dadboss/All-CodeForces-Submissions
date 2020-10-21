#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 75
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll n,m,k;
ll dp[N][N][N][N];
ll a[N][N];
ll ans,tmp;
ll f(ll i,ll j,ll kit,ll rem)
{
  if(j==m)
    return f(i+1,0,m/2,rem);
  if(i==n)
    { 
        if(rem==0)
          return 0;
        return INT_MIN;
    }
  if(dp[i][j][kit][rem]!=-1)
    return dp[i][j][kit][rem];
  dp[i][j][kit][rem]=f(i,j+1,kit,rem);
  if(kit)
    {
      tmp=(k+rem-a[i][j]%k)%k;
      dp[i][j][kit][rem]=max(dp[i][j][kit][rem],a[i][j]+f(i,j+1,kit-1,tmp));
    }
  //dp[i][j][kit][rem]=max(dp[i][j][kit][rem],f(i,j+1,kit,rem));
  return dp[i][j][kit][rem];
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  memset(dp,-1,sizeof(dp));
  cin>>n>>m>>k;
  ll i=0,j;
  while(i<n)
    {
      j=0;
      while(j<m)
      {
        cin>>a[i][j];
        j++;
      }
      i++;
    }
    deb(f(0,0,m/2,0));
  
  /*i=0;
  while(i<n)
  {
    j=0;
    while(j<m)
    {
      ll l=0;
      while(l<=m/2)
      {
        ll q=0;
        while(q<k)
        {
          cout<<i<<" "<<j<<" "<<l<<" ";
          deB(q,dp[i][j][l][q]);
          q++;
        }
        l++;
      }
      j++;
    }
    i++;
  }*/
}