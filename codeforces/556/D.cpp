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
vector<pair<pi,ll>> v;
set<pi> s;
ll ans[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,l,r,pl,pr;
  cin>>n>>m;
  ll i=0;
  while(i<n)
  {
    cin>>l>>r;
    if(i)
      v.pb({{r-pl,i+1},l-pr});
    pl=l;
    pr=r;
    i++;
  }
  ll d;
  i=0;
  while(i<m)
  {
    cin>>d;
    s.insert({d,i+1});
    i++;
  }
  sort(all(v));
  for(auto x:v)
  {
   // Deb(x.ff.ff,x.ff.ss,x.ss)
    auto it=s.lower_bound({x.ss,-1});
    if(it==s.end()||it->ff>x.ff.ff)
    {
      No
      reto
    }
    ans[x.ff.ss]=it->ss;
    s.erase(it);
  }
  Yes
  i=2;
  while(i<=n)
  {
    cout<<ans[i]<<" ";
    i++; 
  }
}         