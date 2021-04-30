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
ll u[N],ans[N];
vi a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,i,d,j;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=1;
    while(i<=n)
    {
      ans[i]=0;
      a[i].clear();
      cin>>u[i];
      i++;
    }
    i=1;
    while(i<=n)
    {
      cin>>d;
      a[u[i]].pb(d);
      i++;
    }  
    i=1;
    while(i<=n)
    {
      sort(all(a[i]),greater<ll>());
      j=1;
      while(j<a[i].size())
      {
        a[i][j]+=a[i][j-1];
        j++;
      }
      i++;
    }
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=a[i].size())
      {
        d=a[i].size()%j;
        ans[j]+=a[i][a[i].size()-1-d];
        //deB(i,ans[j])
        j++;
      }
      i++;
    }
    i=1;
    while(i<=n)
    {
      cout<<ans[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}