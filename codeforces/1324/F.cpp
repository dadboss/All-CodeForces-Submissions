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
vector<ll> a[200009];
ll v;
ll c[200009],ans[200009],dp[200009];
ll dfs(ll n,ll p)
{
  ll sum=0;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      v=dfs(x,n);
      if(v>0)
        sum+=v;
    }
  }
  if(c[n])
    sum++;
  else
    sum--;
  return dp[n]=sum;
}
void fds(ll n,ll p)
{
  ans[n]=dp[n];
  ans[n]+=max(0ll,ans[p]-max(0ll,dp[n]));
  for(auto x:a[n])
  {
    if(x!=p)
      fds(x,n);
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>c[i++];
  i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,-1);
  fds(1,0);
  i=1;
  while(i<=n)
  {
    cout<<ans[i]<<" ";
    i++;
  }
}