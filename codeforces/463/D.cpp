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
#define N 1009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll a[5][N],b[5][N],dp[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k,x,y,z,d;
  cin>>n>>k;
  ll i=0,j;
  while(i<k)
  {
    j=0;
    while(j<n)
    {
      cin>>d;
      b[i][j]=d;
      a[i][d]=j;
      j++;
    }
    i++;
  }
  i=1;
  ll mx=1;
  dp[0]=1;
  while(i<n)
  {
    dp[i]=1;
    j=i-1;
    while(j>-1)
    {
      if(dp[j]+1>dp[i])
      {
        x=b[0][j];
        y=b[0][i];
        z=1;
        while(z<k)
        {
          if(a[z][x]>a[z][y])
            break;
          z++;
        }
        if(z==k)
          dp[i]=1+dp[j];
        mx=max(mx,dp[i]);
      }
      j--;
    }
    i++;
  }
  deb(mx)
}