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
ll dp[1009][1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,ans,i,j,sum,temp,n,k,turn;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    if(k==1)
      deb(1)
    else if(k==2)
      deb(n+1)
    else
    {
      i=1;
      while(i<=n)
      {
        j=1;
        while(j<=k)
        {
          dp[i][j]=0;
          j++;
        }
        i++;
      }
      i=1;
      while(i<=n)
      {
        dp[i][k-1]=(n-i);
        i++;
      }
      k-=2;
      ans=1+n;
      turn=0;
      while(k)
      {
        if(turn)
        {
          i=n;
          while(i>1)
          {
            dp[i][k]=dp[i][k+1];
            i--;
          }
          sum=dp[n][k];
          i=n-1;
          while(i)
          {
            temp=dp[i][k];
            dp[i][k]=sum;
            sum+=temp;
            sum%=mod;
            i--;
          }
          ans+=dp[1][k];
          ans%=mod;
        }
        else
        {
          i=1;
          while(i<n)
          {
            dp[i][k]=dp[i][k+1];
           // Deb(i,k,dp[i][k])
            i++;
          }
          i=2;
          sum=dp[1][k];
          while(i<=n)
          {
            temp=dp[i][k];
            dp[i][k]=sum;
            sum+=temp;
            sum%=mod;
            i++;
          }
          ans+=dp[n][k];
          ans%=mod;
        }
        turn=1-turn;
        k--;
      }
      deb(ans)
    }  
  }
}