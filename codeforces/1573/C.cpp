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
vi t,a[N],g[N];
ll ans,v[N],tot[N];
void dfs(ll n)
{
  if(v[n]==1)
    return;
  if(v[n]==2)
  {
    ans=-1;
    return;
  }
  v[n]=2;
  for(auto x:a[n])
    dfs(x);
  v[n]=1;
  t.pb(n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,k,d,sum,mx;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    ans=0;
    t.clear();
    cin>>n;
    i=1;
    while(i<=n)
    {
      a[i].clear();
      g[i].clear();
      i++;
    }
    i=1;
    while(i<=n)
    {
      v[i]=0;
      cin>>k;
      while(k--)
      {
        cin>>d;
        a[d].pb(i);
        g[i].pb(d);
      }
      i++;
    }
    i=n;
    while(i)
    {
      dfs(i);
      i--;
    }
    if(ans==-1)
    {
      deb(-1)
      cont;
    }
    reverse(all(t));
    for(auto x:t)
    {
      sum=0;
      mx=INT_MAX;
      for(auto y:g[x])
      {
        if(tot[y]>sum)
          sum=tot[y],mx=y;
        else if(tot[y]==sum)
          mx=max(mx,y);
      }
      if(mx>x)
        tot[x]=sum+1;
      else
        tot[x]=sum;
      ans=max(ans,tot[x]);
    }
    deb(ans)
  }
}         