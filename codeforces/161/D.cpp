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
vector<ll> a[500009];
ll k;
ll dp[50009][509];
ll ans=0;
void dfs(ll n,ll p)
{
  dp[n][0]=1;
  ll i;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      dfs(x,n);
      i=0;
      while(i<k)
      {
        ans+=dp[n][i]*dp[x][k-1-i];
        i++;
      }
      i=1;
      while(i<=k)
      {
        dp[n][i]+=dp[x][i-1];
        i++;
      }
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n>>k;
  ll i=n-1,l,r;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,0);
  deb(ans)
}