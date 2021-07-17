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
vi g[N],vec;ll v[N],ans[N];
set<ll> s;
void dfs(ll n)
{
  if(v[n])
    return;
  v[n]=-1;
  for(auto x:g[n])
    dfs(x);
  vec.pb(n);
}
ll tot;
void fds(ll n)
{
  if(ans[n])
    return;
  if(v[g[n][0]]==-1)
  {
    tot++;
    v[g[n][0]]=n;
    ans[n]=g[n][0];
    fds(g[n][0]);
  }
  else
    ans[n]=-1,s.insert(n);
}
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,i,n,d;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=1;
    while(i<=n)
    {
      g[i].clear();
      v[i]=0;
      ans[i]=0;
      i++;
    }
    s.clear();
    vi dup,c,a;
    tot=0;
    i=1;
    while(i<=n)
    {
      cin>>d;
      g[i].pb(d);
      i++;
    }
    tot=0;
    vec.clear();
    i=1;
    while(i<=n)
    {
      dfs(i);
      i++;
    }
    reverse(all(vec));
    for(auto x:vec)
    {
      fds(x);
    }
    deb(tot)
    i=1;
    while(i<=n)
    {
      if(v[i]==-1)
      {
        if(s.find(i)!=s.end())
        {
          s.erase(i);
          dup.pb(i);
        }
        else
          c.pb(i);
      }
      i++;
    }
    for(auto x:s)
      a.pb(x);
    if(dup.size()==1&&a.empty()&&c.empty())
    {
      while(1)
      {

      }
    }
    if(dup.size()==1)
    {
      ans[dup[0]]=c.back();
      c.pop_back();
      ans[a.back()]=dup[0];
      a.pop_back();
    }
    ll j;
    if(dup.size()>1)
    {
      i=0;
      while(i<dup.size())
      {
        j=i+1;
        j%=dup.size();
        ans[dup[i]]=dup[j];
        i++;
      }
    }
    if(a.size()!=c.size())
    {
      while(1)
      {

      }
    }
    while(!a.empty())
    {
      ans[a.back()]=c.back();
      a.pop_back();
      c.pop_back();
    }
    i=1;
    while(i<=n)
    {
      cout<<ans[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}    