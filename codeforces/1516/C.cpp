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
#define N 2000009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll a[N],d[N];
ll n,sum=0,o=-1,e=-1;
void f()
{ 
  d[0]=1;
  ll j=0;
  while(j<n)
  {
    ll i=2000000;
    while(i>-1)
    {
      if(d[i]&&i+a[j]<N)
        d[i+a[j]]=1;
      i--;
    }
    j++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n;
  ll mx=200000;
  ll op=-1;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i];
    sum+=a[i];
    if(a[i]%2)
      o=i;
    else if(a[i]%4)
      e=i;
    else if(a[i]<mx)
    {
      mx=a[i];
      op=i;
    }
    i++;
  }
  f();
  if(sum%2||d[sum/2]==0)
  {
    deb(0)
    reto;
  }
  if(o!=-1)
  {
    deb(1)
    deb(o)
    reto;
  }
  if(sum%4)
  {
    deb(0)
    reto;
  }
  if(e!=-1)
    {
      deb(1)
      deb(e) 
      reto;
    }
  deb(1)
  while(1)
  {
    i=1;
    while(i<=n)
    {
      if(a[i]%2)
      {
        deb(i)
        reto;
      }
      a[i]/=2;
      i++;
    }
  }

}