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
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  ll i=1;
  cin>>n;
  while(i<=n)
    cin>>a[i++];
  vi g;
  vi v;
  i=3;
  ll f=1;
  if(a[2]<a[1])
    f=-1;
  ll ct=2;
  while(i<=n)
  {
    if(a[i]>a[i-1])
    { 
      if(f==1)
        ct++;
      else if(f==-1)
      {
        g.pb(-1);
        v.pb(ct);
        ct=2;
        f=1;
      }
    }
    else
    {
      if(f==1)
      {
        g.pb(1);
        v.pb(ct);
        ct=2;
        f=-1;
      }
      else
        ct++;
    }
    i++;
  }
  v.pb(ct);
  g.pb(f);
  vi h=v;
  if((ll)v.size()==1)
  {
    deb(0)
    reto
  }
  sort(all(v));
  i=(ll)v.size()-2;
  while(i>-1&&v[i]==v[i+1])
    i--;
  if(i==(ll)v.size()-3)
  { 
    i=0;
    while(h[i]!=v.back())
      i++;
    if(h[i+1]==v.back()&&g[i]==1&&v.back()%2)
      deb(1)
    else
      deb(0)
  }
  else
  {
    deb(0)
    reto
  }
}