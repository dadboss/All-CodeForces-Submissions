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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s[100];
ll dp[100][100];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll h,w;
  cin>>h>>w;
  ll i=1;
  while(i<=h)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  i=h;
  ll j;
  while(i)
  {
    j=w;
    while(j)
    {
      if(s[i][j]=='*')
        dp[i][j]=1;
      if(i+1<=h&&j+1<=w&&s[i+1][j]=='*'&&s[i][j+1]=='*')
        dp[i][j]+=min(dp[i+1][j],dp[i][j+1]);
      else if(i+1<=h&&s[i+1][j]=='*')
        dp[i][j]+=dp[i+1][j];
      else if(j+1<=w&&s[i][j+1]=='*')
        dp[i][j]+=dp[i][j+1];
      else if(i==h&&j!=w)
        dp[i][j]+=dp[i][j+1];
      else if(j==w&&i!=h)
        dp[i][j]+=dp[i+1][j];
      else
        dp[i][j]+=min(dp[i][j+1],dp[i+1][j]);
      j--;
    }
    i--;
  }
  deb(dp[1][1])
}