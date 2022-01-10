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
ll v[N];
vi g[N];
struct node
{
  ll l,r,c,d;
};
ll ct;
void dfs(ll n)
{
  if(v[n])
    return;
  v[n]=1;
  ct++;
  for(auto x:g[n])
    dfs(x);
}
node a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,ans,m,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m;
    i=0;
    while(i<m)
    {
      cin>>a[i].l>>a[i].r>>a[i].c;
      a[i].d=0;
      i++;
    }
    ans=0;
    i=31;
    while(i>-1)
    {
      j=1;
      while(j<=n)
      {
        v[j]=0;
        g[j].clear();
        j++;
      }
      j=0;
      while(j<m)
      {
        if((a[j].c&(1ll<<i))||a[j].d==-1)
        {

        }
        else
        {
          g[a[j].l].pb(a[j].r);
          g[a[j].r].pb(a[j].l);
        }
        j++;
      }
      ct=0;
      dfs(1);
      if(ct==n)
      {
        j=0;
        while(j<m)
        {
          if((a[j].c&(1ll<<i)))
            a[j].d=-1;
          j++;
        }
      }
      else
        ans+=(1ll<<i);
      i--;
    }
    deb(ans)
  }
}         