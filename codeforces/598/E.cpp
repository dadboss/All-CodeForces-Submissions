#include<bits/stdc++.h>
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
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
ll dp[35][35][55];
ll f(ll n,ll m,ll k)
{
  //Deb(n,m,k)
  if(k>n*m)
    return INT_MAX;
  if(k==n*m||k==0)
    return 0;
  if(dp[n][m][k]!=-1)
    return dp[n][m][k];
  ll ans=INT_MAX;
  ll i=1,j;
  while(i<m)
  {
    j=0;
    while(j<=k)
    {
      ans=min(ans,n*n+f(n,i,j)+f(n,m-i,k-j));
      j++;
    }
    i++;
  }
  i=1;
  while(i<n)
  {
    j=0;
    while(j<=k)
    {
      ans=min(ans,m*m+f(i,m,j)+f(n-i,m,k-j));
      j++;
    }
    i++;
  }
  return dp[n][m][k]=ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    memset(dp,-1,sizeof(dp));
  ll T,tt=1,n,m,k;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m>>k;
    deb(f(n,m,k))
  }
}         