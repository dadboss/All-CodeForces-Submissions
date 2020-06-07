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
string s[55];
bool vis[50][50];
bool don[50][50];
ll n,m;
inline ll check(ll i,ll j)
{
  if(i==n||j==m||i<0||j<0)
    return 0;
  if(vis[i][j])
    return 0;

  if(s[i][j]=='B'||s[i][j]=='#')
    return 0;
  if(i+1<n&&s[i+1][j]=='B')
    return 0;
  if(j+1<m&&s[i][j+1]=='B')
    return 0;
  if(j-1>-1&&s[i][j-1]=='B')
    return 0;
  if(i-1>-1&&s[i-1][j]=='B')
    return 0;
  return 1;
}
bool dfs(ll i,ll j,ll pi,ll pj)
{
    //deB(i,j)
  if(i==pi&&j==pj)
    return 0;
  if(i==n-1&&j==m-1)
    return 1;
  ll q=check(i,j);
  if(q==0)
    return 0;
  vis[i][j]=1;
  if(don[i][j])
    return 1;
  ll u=0;
  u|=dfs(i+1,j,i,j);
  u|=dfs(i-1,j,i,j);
  u|=dfs(i,j-1,i,j);
  u|=dfs(i,j+1,i,j);
  if(u)
  {
    don[i][j]=1;
  }
  return u;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,b,g;
  cin>>t;
  while(t--)
  {
    memset(don,0,sizeof(don));
    cin>>n>>m;
    i=0;
    while(i<n)
      cin>>s[i++];
    i=b=g=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        if(s[i][j]=='B')
          b++;
        else if(s[i][j]=='G')
          g++;
        j++;
      }
      i++;
    }
    if(g==0)
    {
      YES
      continue;
    }
    if(n-2>-1&&s[n-2][m-1]=='B')
    {
      NO
      continue;
    }
    if(m-2>-1&&s[n-1][m-2]=='B')
    {
      NO
      continue;
    }
    i=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
          
        if(s[i][j]=='G')
        {
           memset(vis,0,sizeof(vis));
          if(dfs(i,j,-1,-1)==0)
          {
            NO;
            break;
          }
        }
        j++;
      }
      if(j!=m)
        break;
      i++;
    }
    if(i==n)
      YES
  }
}

