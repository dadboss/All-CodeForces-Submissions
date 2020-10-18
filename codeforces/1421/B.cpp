#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll n;
string s[209];
bool vis[209][209];
bool dfs(ll i,ll j)
{
  if(vis[i][j])
    return 0;
  if((i==n-1&&j==n-2)||(i==n-2&&j==n-1))
    return 1;
  vis[i][j]=1;
  bool f=0;
  if(i+1<n&&s[i+1][j]==s[i][j])
    f|=dfs(i+1,j);
  if(i-1>-1&&s[i-1][j]==s[i][j])
    f|=dfs(i-1,j);
  if(j+1<n&&s[i][j+1]==s[i][j])
    f|=dfs(i,j+1);
  if(j-1>-1&&s[i][j-1]==s[i][j])
    f|=dfs(i,j-1);
  return f;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i;
  char a,b,c,d;
  cin>>t;
  while(t--)
  {
    memset(vis,0,sizeof(vis));
    cin>>n;
    i=0;
    vpi ans;
    while(i<n)
      cin>>s[i++];
    a=s[0][1];
    b=s[1][0];
    c=s[n-1][n-2];
    d=s[n-2][n-1];
    if(a==b)
    {
      if(c==a)
        ans.pb({n-1,n-2});
      if(d==a)
        ans.pb({n-2,n-1});
      deb(ans.size())
      for(auto x:ans)
        deB(x.ff+1,x.ss+1)
    }
    else if(c==d)
    {
      if(a==c)
        ans.pb({0,1});
      if(b==c)
        ans.pb({1,0});
      deb(ans.size())
      for(auto x:ans)
        deB(x.ff+1,x.ss+1)
    }
    else
    {
      if(a=='1')
        ans.pb({0,1});
      if(b=='1')
        ans.pb({1,0});
      if(c=='0')
        ans.pb({n-1,n-2});
      if(d=='0')
        ans.pb({n-2,n-1});
      deb(ans.size())
      for(auto x:ans)
        deB(x.ff+1,x.ss+1)
    }
  }
}