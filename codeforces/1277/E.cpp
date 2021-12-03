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
#define N 500009
vi g[N];
ll da[N],db[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    queue<ll> q;
  ll T,tt=1,n,i,l,r,ans,sum,u,m,a,b;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m>>a>>b;
    i=1;
    while(i<=n)
    {
      da[i]=db[i]=0;
      g[i].clear();
      i++;
    }
    while(m--)
    {
      cin>>l>>r;
      g[l].pb(r);
      g[r].pb(l);
    }
    q.push(a);
    da[a]=1;
    while(!q.empty())
    { 
      u=q.front();
      q.pop();
      for(auto x:g[u])
      {
        if(da[x]==0&&x!=b)
        {
          da[x]=1;
          q.push(x);
        }
      }
    }
    q.push(b);
    db[b]=1;
    while(!q.empty())
    { 
      u=q.front();
      q.pop();
      for(auto x:g[u])
      {
        if(db[x]==0&&x!=a)
        {
          db[x]=1;
          q.push(x);
        }
      }
    }
    ans=sum=0;
    i=1;
    while(i<=n)
    {
      if(i!=a&&i!=b&&da[i]+db[i]==1)
      {
        if(da[i])
          ans++;
        else
          sum++;
      }
      i++;
    }
    deb(ans*sum)
  }
}         