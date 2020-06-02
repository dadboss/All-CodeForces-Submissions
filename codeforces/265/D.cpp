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
#define N 100009
ll a[N],dp[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll i=2,j;
  while(i<=N)
  {
    if(a[i]==0)
    {
      j=i;
      while(j<=N)
      {
        a[j]=i;
        j+=i;
      }
    }
    i++;
  }
  ll n,d,mx,ans=0;
  cin>>n;
  while(n--)
  {
    cin>>d;
    vector<ll> v;
    while(d>1)
    {
      v.pb(a[d]);
      mx=a[d];
      while(d%mx==0)
        d/=mx;
    }
    mx=0;
    for(auto x:v)
      mx=max(mx,dp[x]);
    mx++;
    ans=max(ans,mx);
    for(auto x:v)
      dp[x]=max(dp[x],mx);
  }
  deb(ans)
}