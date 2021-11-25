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
ll dis[N],d[N];
void dfs(ll n,ll p)
{
  d[n]=1+d[p];
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  d[0]=-1;
  ll T,tt=1,n,i,l,r,k,u;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>k;
    i=1;
    while(i<=n)
    {
      a[i].clear();
      dis[i]=-1;
      i++;
    }
    queue<ll> q;
    while(k--)
    {
      cin>>l;
      dis[l]=0;
      q.push(l);
    }
    i=n-1;
    while(i--)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
    }
    dfs(1,0);
    while(!q.empty())
    {
      u=q.front();
      q.pop();
      for(auto x:a[u])
      {
        if(dis[x]==-1)
        {
          dis[x]=1+dis[u];
          q.push(x);
        }
      }
    }
    /*i=1;
    while(i<=n)
    {
      deB(i,dis[i])
      i++;
    }*/
    i=2;
    while(i<=n)
    {
      if(a[i].size()==1&&d[i]<dis[i])
        break;
      i++;
    }
    if(i<=n)
      YES
    else
      NO
  }
}         