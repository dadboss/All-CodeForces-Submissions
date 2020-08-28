#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll int
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
#define N 5009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll a[N],dp[N][N][2];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0,j,l;
  while(i<n)
    cin>>a[i++];
  i=1;
  while(i<n)
  {
    l=0;
    j=l+i;
    while(j<n)
    {
      dp[l][j][0]=min(dp[l+1][j][0]+1-(ll)(a[l]==a[l+1]),dp[l+1][j][1]+1-(ll)(a[l]==a[j]));
      dp[l][j][1]=min(dp[l][j-1][1]+1-(ll)(a[j]==a[j-1]),dp[l][j-1][0]+1-(ll)(a[l]==a[j]));
      //deB(l,j)
      //deB(dp[l][j][0],dp[l][j][1])
      j++;
      l++;
    }
    i++;
  }
  deb(min(dp[0][n-1][0],dp[0][n-1][1]))
}