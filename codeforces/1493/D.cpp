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
#define p mod
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll power(ll x, ll y ) 
{ 
    ll res = 1;
    x = x % p; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;  
        x = (x*x) % p; 
    } 
    return res; 
} 
ll modInverse(ll n ) 
{ 
    return power(n, p-2); 
} 
ll a[N],b[N];
multiset<ll> s[N];
map<ll,ll> m[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=2,j,ct=0,d,x,r,g,y;
  while(i<=200000)
  {
    if(a[i]==0)
    {
      ct++;
      j=i;
      while(j<=200000)
      {
        a[j]=i;
        j+=i;
      }
    }
    i++;
  }
  ll n,q;
  cin>>n>>q;
  i=1;
  while(i<=n)
  {
    cin>>b[i];
    d=b[i];
    while(d!=1)
    {
      x=a[d];
      ct=0;
      while(d%x==0)
        ct++,d/=x;
      s[x].insert(ct);
      m[i][x]=ct;
    }
    i++;
  }
  g=b[1];
  i=2;
  while(i<=n)
  {
    g=__gcd(g,b[i]);
    i++;
  } 
  while(q--)
  {
    cin>>i>>r;
    d=r;
    while(d!=1)
    {
      x=a[d];
      ct=0;
      while(d%x==0)
        ct++,d/=x;
      if(m[i].find(x)==m[i].end())
      {
        s[x].insert(ct);
        if(s[x].size()==n)
          {
            g*=power(x,*s[x].begin());
            g%=mod;
          }
        m[i][x]=ct;
      }
      else
      {
        if(s[x].size()==n)
        {
          g*=modInverse(power(x,*s[x].begin()));
          g%=mod;
        }
        s[x].erase(s[x].find(m[i][x]));
        m[i][x]+=ct;
        s[x].insert(m[i][x]);
        if(s[x].size()==n)
          {
            g*=power(x,*s[x].begin());
            g%=mod;
          }
      }
    }
    deb(g)
  }
}