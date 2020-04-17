#include<bits/stdc++.h>
using namespace std;
#define ll int
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[200001],p[201][200001];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,k,x,mx,ans,n;
  vector<ll> pos[201];
  cin>>t;
  while(t--)
  {
    i=1;
    while(i<=200)
    {
      pos[i].clear();
      i++;
    }
    cin>>n;
    i=1;
    while(i<=n)
      {
        cin>>a[i];
        pos[a[i]].pb(i);
        j=1;
        while(j<201)
        {
          p[j][i]=p[j][i-1];
          j++;
        }
        p[a[i]][i]++;
        i++;
      }
    i=1;
    ans=1;
    while(i<201)
    {
      if(!pos[i].empty()&&pos[i].size()>1)
      {
        j=0;
        k=pos[i].size()-1;
        while(j<k)
        {
          x=1;
          mx=0;
          while(x<201)
          {
            mx=max(mx,p[x][pos[i][k]-1]-p[x][pos[i][j]]);
            x++;
          }
          ans=max(ans,2*(j+1)+mx);
          j++;
          k--;
        }
      }
      i++;
    }
    deb(ans);
  }
}
