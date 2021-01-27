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
#define N 505
bool dp[N][N][N];
ll n,a[N];
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
void f(ll i,ll num,ll tot)
{
  //deb(i)
  if(num>500||dp[i][num][tot])
    return;
  dp[i][num][tot]=1;
  //Deb(i,num,tot)
  if(i==n)
    return;
  f(i+1,num,tot);
  f(i+1,num+a[i],tot);
  f(i+1,num+a[i],tot+a[i]);
  return;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    ll k;
  cin>>n>>k;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  f(0,0,0);
  i=0;
  vi ans;
  while(i<=k)
  {
    if(dp[n][k][i])
      ans.pb(i);
    i++;
  }
  deb(ans.size())
  for(auto x:ans)
    cout<<x<<" ";
}