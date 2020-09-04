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
#define N 5009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll dp[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,a,b,k,x;
  cin>>n>>a>>b>>k;
  ll i=1,j;
  while(i<=n)
  {
    x=abs(b-i)-1;
    if(x>0)
    {
      dp[i]=min(x,n-i)+min(x,i-1);
    }
    i++;
  }
  i=2;
  while(i<=k)
  {
    j=1;
    while(j<=n)
    {
      f[j]=dp[j]+f[j-1];
      f[j]%=mod;
      j++;
    }
    j=1;
    while(j<=n)
    {
      x=abs(b-j)-1;
      //deb(x)
      if(x>0)
      {
        dp[j]=f[min(n,j+x)]-f[max(0ll,j-x-1)]-(f[j]-f[j-1]);
        dp[j]+=2*mod;
        dp[j]%=mod;
        //deB(j,dp[j])
      }
      j++;
    }
    i++;
  }
  deb(dp[a])
}