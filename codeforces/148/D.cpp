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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
double dp[2][1009][1009];
double f(bool k,ll w,ll b)
{
    //Deb(k,w,b);
  if(w<1)
    return 0;
  if(b<1)
    return 1-k;
  if(dp[k][w][b]!=-1)
    return dp[k][w][b];
  if(k)
    return dp[k][w][b]=b*1.0/(1.0*(b+w))*((w*1.0/(1.0*(w+b-1))*f(0,w-1,b-1))+(1.0*(b-1)/(1.0*b+w-1)*f(0,w,b-2)));
  return dp[k][w][b]=1.0*w/(1.0*(w+b))+ 1.0*b/(1.0*(w+b))*f(1,w,b-1);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll i=0,j;
  while(i<1009)
  {
    j=0;
    while(j<1009)
    {
      dp[0][i][j]=-1;
      dp[1][i][j]=-1;
      j++;
    }
    i++;
  }
  double ans=f(0,n,m);
  //YES
  cout<<fixed<<setprecision(15)<<ans;
}
