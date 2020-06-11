#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll n;
string s[60];
bool vis[60][60];
vector<pair<ll,ll>> v;
void dfs(ll i,ll j)
{
  if(i<1||i>n||j<1||j>n||s[i][j]=='1'||vis[i][j])
    return;
  vis[i][j]=1;
  v.pb({i,j});
  dfs(i-1,j);
  dfs(i+1,j);
  dfs(i,j+1);
  dfs(i,j-1);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll r1,r2,c1,c2;
  cin>>n>>r1>>c1>>r2>>c2;
  ll i=1,j;
  while(i<=n)
    {
      cin>>s[i];
      s[i]='!'+s[i];
      i++;
    }
    dfs(r1,c1);
    if(vis[r2][c2])
    {
      deb(0)
      return 0;
    }
    vector<pair<ll,ll>>g=v;
    v.clear();
    dfs(r2,c2);
    i=0;
    ll ans=LLONG_MAX;
    while(i<v.size())
    {
      j=0;
      while(j<g.size())
      {
        ans=min(ans,(v[i].ff-g[j].ff)*(v[i].ff-g[j].ff)+(v[i].ss-g[j].ss)*(v[i].ss-g[j].ss));
        j++;
      }
      i++;
    }
    deb(ans)
}