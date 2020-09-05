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
#define N 205
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll dp[N][N][N];
string s,p;
ll n;
ll f(ll i,ll k,ll sum)
{
  if(k==-1)
    return INT_MIN;
  if(i==-1)
    return 0;
  //Deb(i,k,sum)
  if(dp[i][k][sum]!=-1)
    return dp[i][k][sum];
  if(s[i]==p[0]&&s[i]==p[1])
      return dp[i][k][sum]=sum+f(i-1,k,sum+1);
  if(s[i]==p[0])
      return dp[i][k][sum]=max(sum+f(i-1,k,sum),f(i-1,k-1,sum+1));
  if(s[i]==p[1])
    return dp[i][k][sum]=max(f(i-1,k,sum+1),sum+f(i-1,k-1,sum));
  if(p[0]==p[1])
    return dp[i][k][sum]=max(f(i-1,k,sum),sum+f(i-1,k-1,sum+1));
  return dp[i][k][sum]=max({sum+f(i-1,k-1,sum),f(i-1,k-1,sum+1),f(i-1,k,sum)});
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  memset(dp,-1,sizeof(dp));
  ll k;
  cin>>n>>k>>s>>p;
  deb(f(n-1,k,0));
}