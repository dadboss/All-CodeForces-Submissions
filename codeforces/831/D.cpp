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
#define N 2009
ll a[N],c[N];
ll n,k,p;
bool f(ll m)
{
  ll i=0,j=0;
  while(i<n)
  {
    while(j<k)
    {
      if(abs(a[i]-c[j])+abs(p-c[j])<=m)
        break;
      j++;
    }
    if(j==k)
      return 0;
    j++;
    i++;
  }
  return 1;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n>>k>>p;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  sort(a,a+n);
  i=0;
  while(i<k)
    cin>>c[i++];
  sort(c,c+k);
  ll ans,s=0,e=1e13,m;
  while(s<=e)
  {
    m=(s+e)/2;
    if(f(m))
    {
      ans=m;
      e=m-1;
    }
    else
      s=m+1;
  }
  deb(ans)
}    