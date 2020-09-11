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
#define N 300009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll dp[N],a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  stack<ll> up,dn;
  up.push(0);
  dn.push(0);
  i=1;
  while(i<n)
  {
    dp[i]=1+dp[i-1];
    while(!up.empty()&&a[up.top()]<a[i])
    {
      dp[i]=min(dp[i],dp[up.top()]+1);
      up.pop();
    }
    if(!up.empty())
      {
        dp[i]=min(dp[i],dp[up.top()]+1);
        if(a[up.top()]==a[i])
          up.pop();
      }
    up.push(i);
    while(!dn.empty()&&a[dn.top()]>a[i])
    {
      dp[i]=min(dp[i],dp[dn.top()]+1);
      dn.pop();
    }
    if(!dn.empty())
      {
        dp[i]=min(dp[i],dp[dn.top()]+1);
        if(a[dn.top()]==a[i])
          dn.pop();
      }
    dn.push(i);
    i++;
  }
  deb(dp[n-1])
}