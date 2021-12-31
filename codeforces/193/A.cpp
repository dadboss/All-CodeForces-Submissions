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
bool v[55][55];
string s[N];
ll ans,n,m;
void dfs(ll i,ll j)
{
  if(min(i,j)<1||i>n||j>m||v[i][j]||s[i][j]=='.')
    return;
  v[i][j]=1;
  ans++;
  dfs(i+1,j);
  dfs(i-1,j);
  dfs(i,j+1);
  dfs(i,j-1);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n>>m;
  ll i=1;
  while(i<=n)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  ll tot=0,j;
  i=1;
  while(i<=n)
  {
    j=1;
    while(j<=m)
    {
      if(s[i][j]=='#')
        tot++;
      j++;
    }
    i++;
  }
  if(tot<3)
  {
    deb(-1)
    reto
  }
  i=1;
  while(i<=n)
  {
    j=1;
    while(j<=m)
    {
      if(s[i][j]=='#')
      {
        ll rew=0;
        s[i][j]='.';
        memset(v,0,sizeof(v));
        ans=0;
        dfs(i+1,j);
        if(ans!=tot-1)
        {
          rew++;
        }
        memset(v,0,sizeof(v));
        ans=0;
        dfs(i-1,j);
        if(ans!=tot-1)
        {
          rew++;
        }
        memset(v,0,sizeof(v));
        ans=0;
        dfs(i,j+1);
        if(ans!=tot-1)
        {
          rew++;
        }
        memset(v,0,sizeof(v));
        ans=0;
        dfs(i,j-1);
        if(ans!=tot-1)
        {
          rew++;
        }
        if(rew==4)
        {
          deb(1)
          reto
        }
        s[i][j]='#';
      }
      j++;
    }
    i++;
  }
  deb(2)
}         