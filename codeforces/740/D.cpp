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
multiset<ll> s[N];
ll c[N],ind[N],ans[N];
vpi a[N];
ll ct;
void dfs(ll n,ll d)
{
  ind[n]=n;
  for(auto x:a[n])
  {
    dfs(x.ff,d+x.ss);
    if(s[ind[n]].size()<s[ind[x.ff]].size())
    {
      for(auto y:s[ind[n]])
        s[ind[x.ff]].insert(y);
      ind[n]=ind[x.ff];
    }
    else
    {
      for(auto y:s[ind[x.ff]])
        s[ind[n]].insert(y);
    }
  }
  while(!s[ind[n]].empty())
  {
    if(*s[ind[n]].rbegin()>d)
      s[ind[n]].erase(s[ind[n]].find(*s[ind[n]].rbegin()));
    else
      break;
  }
  ans[n]=s[ind[n]].size();
  s[ind[n]].insert(d-c[n]);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,p,w,d;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>c[i++];
  i=2;
  while(i<=n)
  {
    cin>>p>>d;
    a[p].pb({i,d});
    i++;
  }
  dfs(1,0);
  i=1;
  while(i<=n)
  {
    cout<<ans[i]<<" ";
    i++;
  }
}         