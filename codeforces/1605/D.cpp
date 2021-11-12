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
vi a[N],v[2];
ll ans[N];
void dfs(ll n,ll p,ll k)
{
  v[k].pb(n);
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n,1-k);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,l,r,d,num,org;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    v[0].clear();
    v[1].clear();
    cin>>n;
    i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
    i=n-1;
    while(i--)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
    }
    dfs(1,-1,0);
    i=1;
    while(i<=n)
      i+=i;
    i/=2;
    d=n-i+1;
    num=i;
    while(num)
    {
      org=num;
      if(d<=v[0].size())
        i=0;
      else
        i=1;
      while(d--)
      {
        ans[v[i].back()]=num;
        v[i].pop_back();
        num++;
      }
      num=org/2;
      d=num;
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