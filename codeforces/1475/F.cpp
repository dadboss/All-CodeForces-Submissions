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
#define N 1009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s[N],p[N];
ll r[N],c[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,n,j,x;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=1;
    while(i<=n)
    {
      cin>>s[i];
      r[i]=c[i]=0;
      s[i]='!'+s[i];
      i++;
    }   
    i=1;
    while(i<=n)
    {
      cin>>p[i];
      p[i]='!'+p[i];
      i++;
    }
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=n)
      {
        x=((s[i][j]-'0')+r[i]+c[j])%2;
        if(x!=p[i][j]-'0')
        {
          if(j==1)
            r[i]=1;
          else if(i==1)
            c[j]=1;
          else
          {
            NO
            break;    
          }
        }
        j++;
      }
      if(j!=n+1)
        break;
      i++;
    }
    if(i==n+1)
      YES
  }
}