#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
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
#define N 5009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll a[N],b[N],dp[N][N],p[N],s[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  i=1;
  while(i<=n)
  {
    cin>>b[i];
    p[i]=p[i-1]+a[i]*b[i];
    dp[i][i]=a[i]*b[i];
    i++;
  }
  i=n;
  while(i)
  {
    s[i]=s[i+1]+a[i]*b[i];
    i--;
  }
  ll ans=p[n];
  i=1;
  while(i<n)
  {
    dp[i][i+1]=a[i]*b[i+1]+a[i+1]*b[i];
    ans=max(ans,dp[i][i+1]+p[i-1]+s[i+2]);
    i++;
  }
  ll l=3,j;
  while(l<=n)
  {
    i=1;
    j=i+l-1;
    while(j<=n)
    {
      dp[i][j]=dp[i+1][j-1]+a[i]*b[j]+a[j]*b[i];
      ans=max(ans,dp[i][j]+p[i-1]+s[j+1]);
      j++;
      i++;
    }
    l++;
  }
  deb(ans)
}