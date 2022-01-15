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
set<pi> s;
vi f;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,j,m,nx,ny,pd,ans,x,y;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m;
    vector<vi> v(n+1,vi (m+1));
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=m)
      {
        v[i][j]=0;
        j++;
      }
      i++;
    }
    f.clear();
    s.clear();
    s.insert({1,1});
    s.insert({1,m});
    s.insert({n,1});
    s.insert({n,m});
    v[1][1]=v[1][m]=v[n][1]=v[n][m]=1;
    pd=0;
    while(!s.empty())
    {
      x=s.begin()->ff;
      y=s.begin()->ss;
      s.erase(s.begin());
      if(v[x][y]!=pd)
      {
        ans=max({abs(1-x)+abs(1-y),abs(1-x)+abs(m-y),abs(n-x)+abs(1-y),abs(n-x)+abs(m-y)});
        pd=v[x][y];
      }
      nx=x+1;
      ny=y;
      if(nx>0&&nx<=n&&ny>0&&ny<=m&&v[nx][ny]==0)
      {
        v[nx][ny]=1+v[x][y];
        s.insert({nx,ny});
      }
      nx=x-1;
      ny=y;
      if(nx>0&&nx<=n&&ny>0&&ny<=m&&v[nx][ny]==0)
      {
        v[nx][ny]=1+v[x][y];
        s.insert({nx,ny});
      }
      nx=x;
      ny=y+1;
      if(nx>0&&nx<=n&&ny>0&&ny<=m&&v[nx][ny]==0)
      {
        v[nx][ny]=1+v[x][y];
        s.insert({nx,ny});
      }
      nx=x;
      ny=y-1;
      if(nx>0&&nx<=n&&ny>0&&ny<=m&&v[nx][ny]==0)
      {
        v[nx][ny]=1+v[x][y];
        s.insert({nx,ny});
      }
      f.pb(ans);
    }
    sort(all(f));
    for(auto x:f)
      cout<<x<<" ";
    cout<<"\n";
  }
}         