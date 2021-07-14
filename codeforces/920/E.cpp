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
ll tot;
set<ll> s;
set<ll> a[N];
void dfs(ll n)
{
  tot++;
  s.erase(n);
  auto it=s.begin();
  while(it!=s.end())
  {
    if(a[n].find(*it)==a[n].end())
    {
      ll x=*it;
      dfs(x);
      it=s.lower_bound(x);
    }
    else
      it++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    ll n,m,l,r;
    cin>>n>>m;
    while(m--)
    {
      cin>>l>>r;
      a[l].insert(r);
      a[r].insert(l);
    }
    vi ans;
    ll i=1,u;
    while(i<=n)
    {
      s.insert(i);
      i++;
    }
    while(!s.empty())
    {
      u=*s.begin();
      tot=0;
      dfs(u);
      ans.pb(tot);
    }
    deb(ans.size());
    sort(all(ans));
    for(auto x:ans)
      cout<<x<<" ";
}    