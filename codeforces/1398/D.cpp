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
#define N 209
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll r[N],b[N],g[N],x,y,z,ans,ct;
ll dp[N][N][N];
ll f(ll i,ll j,ll k)
{
  if(dp[i][j][k])
    return dp[i][j][k];
  ct=0;
  if(i==x)
    ct++;
  if(j==y)
    ct++;
  if(k==z)
    ct++;
  if(ct>1)
    return 0;
  if(i!=x&&j!=y&&k!=z)
  {
    ll op1=r[i]*g[j]+f(i+1,j+1,k);
    ll op2=g[j]*b[k]+f(i,j+1,k+1);
    ll op3=r[i]*b[k]+f(i+1,j,k+1);
    return dp[i][j][k]=max({op1,op2,op3});
  }
  ans=0;
  while(i<x&&j<y)
  {
    ans+=r[i]*g[j];
    i++;
    j++;
  }
  while(j<y&&k<z)
  {
    ans+=g[j]*b[k];
    k++;
    j++;
  }
  while(i<x&&k<z)
  {
    ans+=r[i]*b[k];
    i++;
    k++;
  }
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll j,k,ans=0;
  cin>>x>>y>>z;
  ll i=0;
  while(i<x)
    cin>>r[i++];
  sort(r,r+x,greater<ll>());
  i=0;
  while(i<y)
    cin>>g[i++];
  sort(g,g+y,greater<ll>());
  i=0;
  while(i<z)
    cin>>b[i++];
  sort(b,b+z,greater<ll>());
  ll qwe=f(0,0,0);
  deb(qwe)
}