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
ll k;
vi a[N];
ll ans[N];
ll tim[N],v[N];
ll t;
void dfs(ll n)
{
  if(v[n])
    return;
  v[n]=1;
  tim[n]=t;
  ans[t]=n;
  t++;
  for(auto x:a[n])
  {
    dfs(x);
    if(abs(tim[n]-tim[x])+1>k)
    {
      ll i=min(tim[n],tim[x]);
      deb(max(tim[n],tim[x])-i+1)
      while(i<=max(tim[n],tim[x]))
      {
        cout<<ans[i]<<" ";
        i++;
      }
      exit(0);
    }
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
  cin>>n>>m>>k;
  while(m--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1);
}         