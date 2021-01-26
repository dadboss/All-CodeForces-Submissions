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
vi d[N];
ll f[N],a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=1,j;
  while(i<=200000)
  {
    j=i+i;
    while(j<=200000)
    {
      d[j].pb(i);
      j+=i;
    }
    i++;
  }
  ll t=1,n,ans,sum;
  cin>>t;
  while(t--)
  {
    i=1;
    while(i<=200000)
    {
      f[i]=0;
      i++;
    }
    cin>>n;
    ans=n-1;
    i=0;
    while(i<n)
     {
      cin>>a[i];
      f[a[i]]++;
      i++;
     }
    sort(a,a+n);
    i=0;
    while(i<n)
    {
      if(i==0||a[i]!=a[i-1])
      {
        sum=0;
        for(auto x:d[a[i]])
          {
            sum=max(sum,f[x]);
          }
        f[a[i]]+=sum;
       // deB(a[i],f[a[i]])
        ans=min(ans,n-f[a[i]]);
      }
      i++;
    }
    deb(ans)
  }
}