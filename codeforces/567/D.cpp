#include<bits/stdc++.h>
using namespace std;
#define ll int
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
ll n,k,a,m;
ll c[N];
set<ll> s;
vi v;
bool f(ll mid)
{
  v.clear();
  ll ans=0;
  ll prev=0;
  ll i=1;
  while(i<=mid)
  {
    v.pb(c[i]);
    i++;
  }
  v.pb(n+1);
  sort(all(v));
  for(auto x:v)
  {
    if(x-prev-1>=a)
    {
      ans++;
      i=x-prev-1-a;
      ans+=i/(a+1);
    }
    prev=x;
  }
  return ans>=k;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n>>k>>a>>m;
  ll i=1;
  while(i<=m)
    cin>>c[i++];
  ll s=1,e=m,mid;
  ll ans=INT_MAX;
  while(s<=e)
  {
    mid=(s+e)/2;
   // deb(mid)
    if(f(mid)==0)
      ans=mid,e=mid-1;
    else
      s=mid+1;
  }
  if(ans==INT_MAX)
    ans=-1;
  deb(ans)
 // deb(f(1))
}         