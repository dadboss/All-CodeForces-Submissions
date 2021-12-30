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
vi a[N];
ll c[N],ans,red[N],blue[N];
void dfs(ll n,ll p)
{
  red[n]=blue[n]=0;
  if(c[n]==1)
    red[n]++;
  else if(c[n]==2)
    blue[n]++;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      dfs(x,n);
      red[n]+=red[x];
      blue[n]+=blue[x];
    }
  }
}
void fds(ll n,ll p,ll r,ll b)
{
  for(auto x:a[n])
  {
    if(x!=p)
    {
      if(red[x]*blue[x]==0&&(r+red[n]-red[x])*(b+blue[n]-blue[x])==0)
        ans++;
      fds(x,n,r+red[n]-red[x],b+blue[n]-blue[x]);
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
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>c[i++];
  i=n-1;
  ll l,r;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,-1);
  fds(1,-1,0,0);
  deb(ans)
}         