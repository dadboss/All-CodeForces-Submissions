#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<unordered_set>
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
ll ans[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>n>>m;
  ll i=1;
  while(i<=m)
  {
    ans[i]=INT_MAX;
    i++;
  }
  unordered_set<ll> v;
  v.insert(0);
  i=0;
  ll t,x,y,k,j;
  while(i<n)
  {
    cin>>t>>x>>y;
    if(t==1)
    {
      x+=99999;
      x/=100000;
      unordered_set<ll> s;
      for(auto it:v)
      {
        k=it;
        j=0;
        while(k<=m&&j<=y)
         {
          ans[k]=min(ans[k],i+1);
          s.insert(k);
          k+=x;
          if(k<=m&&ans[k]!=INT_MAX)
            break;
          j++;
         }
      }
      v=s;
    }
    else
    {
      unordered_set<ll> s;
      for(auto it:v)
      {
        k=it;
        j=0;
        while(j<=y&&k<=m)
        {
          ans[k]=min(ans[k],i+1);
          s.insert(k);
          k*=x;
          if(k%100000)
            k=k/100000+1;
          else
            k/=100000;
          if(k<=m&&ans[k]!=INT_MAX)
            break;
          j++;
        }
      }
      v=s;
    }
    i++;
  }
  i=1;
  while(i<=m)
  {
    if(ans[i]==INT_MAX)
      ans[i]=-1;
    cout<<ans[i]<<" ";
    i++;
  }
}