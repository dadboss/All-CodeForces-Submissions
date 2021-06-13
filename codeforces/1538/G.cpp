#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 200009
ll x,y,a,b;
bool f(ll m)
{
  ll q=(x-m*b)/(a-b);
  if(x-m*b<0)
    return 0;
  ll w=(a*m-y+a-b-1)/(a-b);
  if(w>m)
    return 0;
  return q>=w;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,s,e,ans,m;
  cin>>t;
  while(t--)
  {
    cin>>x>>y>>a>>b;
    if(a==b)
    {
      deb(min(x,y)/a)
      cont;
    }
    if(a<b)
      swap(a,b),swap(x,y);
    s=ans=0;
    e=1e9;
    while(s<=e)
    {
      m=(s+e)/2;
      if(f(m))
      {
        ans=m;
        s=m+1;
      }
      else
        e=m-1;
    }    
    deb(ans)
  }
}    