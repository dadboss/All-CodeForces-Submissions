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
ll is[25][25];
ll dp[300000][20];
ll c[25];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,k;
  cin>>n>>m>>k;
  ll i=0,d;
  ll op=0;
  while(i<n)
    {
      cin>>d;
      c[i]=d;
      op=max(op,d);
      dp[(1ll<<i)][i+1]=d;
      i++;
    }
    if(m==1)
    {
      deb(op)
      return 0;
    }
  ll x,y;
  while(k--)
  {
    cin>>x>>y>>i;
    is[x][y]=i;
  }
  ll ans=0,num,j,w;
  i=1;
  while(i<(1ll<<n))
  {
    if(__builtin_popcountll(i)>1)
    {
      j=0;
      while(j<n)
      {
        if((1ll<<j)&i)
        {
          num=i;
          num&=~(1ll<<j);
          w=0;
          while(w<n)
          {
            if(num&(1ll<<w))
            {
              dp[i][j+1]=max(dp[i][j+1],is[j+1][w+1]+dp[num][w+1]);
            }
            w++;
          }
          dp[i][j+1]+=c[j];
          if(__builtin_popcountll(i)==m)
            ans=max(ans,dp[i][j+1]);
        }
        j++;
      }
    }
    i++;
  }
  deb(ans)
}