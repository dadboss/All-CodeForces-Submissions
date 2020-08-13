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
string s[2009];
ll dx[4]={1,-1,0,0};
ll dy[4]={0,0,1,-1};
bool vis[2009][2009];
#define pi pair<pair<ll,ll>,pair<ll,ll>>
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,x,y,l,r,ans=1,nx,ny;
  cin>>n>>m>>x>>y>>l>>r;
  pair<pair<ll,ll>,pair<ll,ll>> u;
  x--;
  y--;
  ll i=0;
  while(i<n)
    cin>>s[i++];
   priority_queue <pi, vector <pi>, greater <pi> > q;
  q.push({{0,0},{x,y}});
  vis[x][y]=1;
  while(!q.empty())
  {
    u=q.top();
    //deB(u.ff.ff,u.ff.ss)
    //deB(u.ss.ff,u.ss.ss)
    //YES
    x=u.ss.ff;
    y=u.ss.ss;
    q.pop();
    i=0;
    while(i<4)
    {
      nx=x+dx[i];
      ny=y+dy[i];
      //deB(nx,ny)
      if(i<2)
      {
        if(nx>-1&&nx<n&&ny>-1&&ny<m&&s[nx][ny]=='.'&&vis[nx][ny]==0)
        {
          ans++;
          vis[nx][ny]=1;
          q.push({u.ff,{nx,ny}});
        }
      }
      else
      { //YES
        if(i==2)
        {
          //deB(u.ss.ff,u.ss.ss)
          if(nx>-1&&nx<n&&ny>-1&&ny<m&&s[nx][ny]=='.'&&vis[nx][ny]==0&&u.ff.ss+1<=r)
          {
            ans++;
            vis[nx][ny]=1;
            q.push({{u.ff.ff,u.ff.ss+1},{nx,ny}});
          }   
        }
        else if(nx>-1&&nx<n&&ny>-1&&ny<m&&s[nx][ny]=='.'&&vis[nx][ny]==0&&u.ff.ff+1<=l)
        {
          ans++;
          vis[nx][ny]=1;
          q.push({{u.ff.ff+1,u.ff.ss},{nx,ny}});
        }
      }
      i++;
    }
  }
  deb(ans)
}