#include<bits/stdc++.h>
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
#define N 300009
ll lim=4000000000000000000;
ll y,ans,num;
vi v;
set<ll> m;
inline ll g(ll n)
{
  v.clear();
  while(n)
  {
    v.pb(n%2);
    n/=2;
  }
  ans=0;
  n=1;
  while(!v.empty())
  {
    if(v.back())
      ans+=n;
    n+=n;
    v.pop_back();
  }
  return ans;
}
void f(ll n)
{
  if(n==y)
  {
    YES
    exit(0);
  }
  if(m.find(n)!=m.end())
    return;
  m.insert(n);
  num=g(n+n+1);
  if(num<=lim)
    f(num);
  
      num=g(n+n);
      if(num<=lim)
        f(num);
   
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll x;
  cin>>x>>y;
  if(x==y)
  {
    YES
    reto
  }
  if(y%2==0)
  {
    NO
    reto
  }
  f(x);
  NO
}         