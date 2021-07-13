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
vi t,c;
vi a[N];
ll v[N];
void dfs(ll n,ll p)
{
  if(!c.empty())
    return;
  if(v[n])
  {
    v[n]=2;
    c.pb(n);
    while(t.back()!=n)
      c.pb(t.back()),v[t.back()]=2,t.pop_back();
    return;
  }
  v[n]=1;
  t.pb(n);
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n);
  t.pop_back();
}
ll f(ll n,ll p)
{
  ll ans=1;
  for(auto x:a[n])
  {
    if(x!=p&&v[x]!=2)
      ans+=f(x,n);
  }
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,n,i,l,r,ans;
  cin>>T;
  while(T--)
  {
      t.clear();
      c.clear();
      cin>>n;
      i=1;
      while(i<=n)
      {
        v[i]=0;
        a[i].clear();
        i++;
      }
      i=n;
      while(i--)
      {
        cin>>l>>r;
        a[l].pb(r);
        a[r].pb(l);
      }
      dfs(1,-1);
      ans=n*(n-1);
      for(auto x:c)
        {
          i=f(x,-1);
          i--;
          ans-=i+i*(i-1)/2;
        }
      deb(ans)
  }
}    