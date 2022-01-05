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
vpi v;
ll n,m,k,pos;
string s[N];
bool vis[100][100];
vector<vpi> ans;
void dfs(ll i,ll j)
{
  if(min(i,j)<1||i>n||j>m||s[i][j]=='*'||vis[i][j])
    return;
  if(i==1||j==1||i==n||j==m)
    pos=0;
  vis[i][j]=1;
  v.pb({i,j});
  dfs(i+1,j);
  dfs(i-1,j);
  dfs(i,j+1);
  dfs(i,j-1);
}
bool cmp(vpi a,vpi b)
{
  return a.size()>b.size();
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n>>m>>k;
  ll i=1;
  while(i<=n)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  ll j;
  i=1;
  while(i<=n)
  {
    j=1;
    while(j<=m)
    {
      if(s[i][j]=='.'&&vis[i][j]==0)
      {
        v.clear();
        pos=1;
        dfs(i,j);
        if(pos)
          ans.pb(v);
      }
      j++;
    }
    i++;
  }
  ll op=0;
  sort(all(ans),cmp);
  while(ans.size()>k)
  {
    op+=ans.back().size();
    for(auto x:ans.back())
      s[x.ff][x.ss]='*';
    ans.pop_back();
  }
  deb(op)
  i=1;
  while(i<=n)
  {
    deb(s[i].substr(1,m));
    i++;
  }
}         