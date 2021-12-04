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
#define N 1009
ll n,m,vis[N][N],d[N][N];
vpi v;
string s[N];
void dfs(ll i,ll j,char ch)
{
  if(min(i,j)<1||i>n||j>m||vis[i][j]||s[i][j]!=ch)
    return;
  v.pb({i,j});
  vis[i][j]=1;
  dfs(i+1,j,ch);
  dfs(i-1,j,ch);
  dfs(i,j+1,ch);
  dfs(i,j-1,ch);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll Q;
  cin>>n>>m>>Q;
  ll i=1;
  while(i<=n)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  ll j,ni,nj;
  memset(d,-1,sizeof(d));

  queue<pi> q;
  i=1;
  while(i<=n)
  {
    j=1;
    while(j<=m)
    {
      v.clear();
      dfs(i,j,s[i][j]);
      if(v.size()>1)
        for(auto x:v)
          q.push(x),d[x.ff][x.ss]=0;
      j++;
    }
    i++;
  }
  while(!q.empty())
  {
    i=q.front().ff;
    j=q.front().ss;
    q.pop();

    ni=i+1;
    nj=j;
    if(min(ni,nj)>0&&ni<=n&&nj<=m&&d[ni][nj]==-1)
    {
      d[ni][nj]=1+d[i][j];
      q.push({ni,nj});
    }
    ni=i-1;
    nj=j;
    if(min(ni,nj)>0&&ni<=n&&nj<=m&&d[ni][nj]==-1)
    {
      d[ni][nj]=1+d[i][j];
      q.push({ni,nj});
    }
    ni=i;
    nj=j+1;
    if(min(ni,nj)>0&&ni<=n&&nj<=m&&d[ni][nj]==-1)
    {
      d[ni][nj]=1+d[i][j];
      q.push({ni,nj});
    }
    ni=i;
    nj=j-1;
    if(min(ni,nj)>0&&ni<=n&&nj<=m&&d[ni][nj]==-1)
    {
      d[ni][nj]=1+d[i][j];
      q.push({ni,nj});
    }
  }
  ll t;
  while(Q--)
  {
    cin>>i>>j>>t;
    if(d[i][j]==-1||t<=d[i][j]||t%2==d[i][j]%2)
    {
      deb(s[i][j])
      cont
    }
    if(s[i][j]=='1')
      deb(0)
    else
      deb(1)
  }
}         