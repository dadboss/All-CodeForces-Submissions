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
map<pi,ll> m;
ll l[N],r[N];
void dfs(ll n,ll p,ll d)
{
  for(auto x:a[n])
  {
    if(x!=p)
    {
      m[{n,x}]=m[{x,n}]=2+d;
      dfs(x,n,1-d);
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
  ll T,tt=1,n,i,ind;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    m.clear();
    cin>>n;
    i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
    i=0;
    while(i<n-1)
    {
      cin>>l[i]>>r[i];
      a[l[i]].pb(r[i]);
      a[r[i]].pb(l[i]);
      i++;
    }
    i=1;
    while(i<=n)
    {
      if(a[i].size()>2)
        break;
      if(a[i].size()==1)
        ind=i;
      i++;
    }
    if(i<=n)
    {
      deb(-1)
      cont
    }
    dfs(ind,-1,0);
    i=0;
    while(i<n-1)
    {
      cout<<m[{l[i],r[i]}]<<" ";
      i++;
    }
    cout<<"\n";
  }
}         