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
string s[109];
bool vis[109][109];
ll n,m;
ll r[109][109];
void dfs(ll i,ll j)
{
  if(i<0||j<0||i>=n||j>=m||vis[i][j])
    return;
  vis[i][j]=1;
  if(s[i][j]=='R')
    dfs(i,j+1);
  else if(s[i][j]=='D')
    dfs(i+1,j);
  return;
}
bool f(ll i,ll j)
{
  if(i<0||j<0||i>=n||j>=m||r[i][j]==-1)
    return 0;
  if(r[i][j]==1)
    return 1;
  if(i==n-1&&j==m-1)
    return 1;
  if(s[i][j]=='R')
  {
    if(f(i,j+1))
      return r[i][j]=1;
    else
      {
        r[i][j]=-1;
        return 0;
      }
  }
  if(s[i][j]=='D')
  {
    if(f(i+1,j))
      return r[i][j]=1;
    else
      {
        r[i][j]=-1;
        return 0;
      }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,ans,ct;
  cin>>t;
  while(t--)
  {
    memset(vis,0,sizeof(vis));
    memset(r,0,sizeof(r));
    cin>>n>>m;
    i=0;
    ans=0;
    while(i<n)
      cin>>s[i++];
    i=0;
    while(i<n)
    {
      if(s[i][m-1]=='R')
      {
        s[i][m-1]='D';
        ans++;
      }
      i++;
    }
    i=0;
    while(i<m)
    {
      if(s[n-1][i]=='D')
      {
       s[n-1][i]='R' ;
       ans++;
      }
      i++;
    }
    i=ct=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        if(f(i,j))
          ct++;
        j++;
      }
      i++;
    }
    //deb(ct)
    i=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        if(r[i][j]==-1&&vis[i][j]==0)
        {
          deB(i,j)
          ans++;
          dfs(i,j);
        }
        j++;
      }
      i++;
    }
    deb(ans)
  }
}