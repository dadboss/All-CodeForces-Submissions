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
string s[1009];
  ll v[1009][1009];
  bool vis[1009][1009]={};
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,k,x1,x2,y1,y2,x,y,nx,ny;
  cin>>n>>m>>k;
  ll i=1;
  while(i<=n)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  cin>>x1>>y1>>x2>>y2;
  memset(v,-1,sizeof(v));
  queue<pair<ll,ll>> q;
  q.push({x1,y1});
  v[x1][y1]=0;
  vis[x1][y1]=1;
  while(!q.empty())
  {
    x=q.front().ff;
    y=q.front().ss;
    q.pop();
    nx=x;
    i=k;
    while(i--)
    {
      nx--;
      if(nx<1||s[nx][y]=='#')
        break;
      if(v[nx][y]!=-1&&v[nx][y]<=v[x][y])
        break;
      v[nx][y]=v[x][y]+1;
      if(vis[nx][y]==0)
      {
        vis[nx][y]=1;
        q.push({nx,y}) ;
      }
    }
    nx=x;
    i=k;
    while(i--)
    {
      nx++;
      if(nx>n||s[nx][y]=='#')
        break;
      if(v[nx][y]!=-1&&v[nx][y]<=v[x][y])
        break;
      v[nx][y]=v[x][y]+1;
      if(vis[nx][y]==0)
      {
        vis[nx][y]=1;
        q.push({nx,y}) ;
      }
    }
    ny=y;
    i=k;
    while(i--)
    {
      ny--;
      if(ny<1||s[x][ny]=='#')
        break;
      if(v[x][ny]!=-1&&v[x][ny]<=v[x][y])
        break;
      v[x][ny]=v[x][y]+1;
      if(vis[x][ny]==0)
      {
        vis[x][ny]=1;
        q.push({x,ny}) ;
      }
    }
    ny=y;
    i=k;
    while(i--)
    {
      ny++;
      if(ny>m||s[x][ny]=='#')
        break;
      if(v[x][ny]!=-1&&v[x][ny]<=v[x][y])
        break;
      v[x][ny]=v[x][y]+1;
      if(vis[x][ny]==0)
      {
        vis[x][ny]=1;
        q.push({x,ny}) ;
      }
    }
  }
  deb(v[x2][y2])
}