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
ll a[N],t[4*N];
void build( int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        t[v] = __gcd(t[v*2] , t[v*2+1]);
    }
}
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return __gcd(sum(v*2, tl, tm, l, min(r, tm))
           , sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
ll n,i,j,x;
bool f(ll m)
{
  i=2;
  j=2+m;
  if(j>n)
    j=1;
  x=sum(1,1,n,1,1+m);
  while(i<=n)
  {
    if(j>=i)
    {
      if(sum(1,1,n,i,j)!=x)
       return 0;
    }
    else
    {
      if(__gcd(sum(1,1,n,1,j),sum(1,1,n,i,n))!=x)
        return 0;
    }
    i++;
    j++;
    if(j==n+1)
      j=1;
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
  ll t,i,s,m,e,ans;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=1;
    while(i<=n)
      cin>>a[i++];
    build(1,1,n);
    s=0;
    e=n-1;
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
}  