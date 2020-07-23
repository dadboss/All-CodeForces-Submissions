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
ll a[509],pal[509][509],dp[509][509],n;
ll f(ll i,ll j)
{
    //deB(i,j)
  if(i>j||i<1||i>n||j<1||j>n)
    return 0;
  if(pal[i][j])
    return 1;
  if(dp[i][j]!=-1)
    return dp[i][j];
  ll ans=LLONG_MAX;
  ll s=i;
  while(s<j)
  {
    ans=min(ans,f(i,s)+f(s+1,j));
    s++;
  }
  if(a[i]==a[j])
    ans=min(ans,f(i+1,j-1));
  return dp[i][j]=ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  memset(dp,-1,sizeof(dp));
  ll j,q;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  i=1;
  while(i<=n)
  {
    j=i-1;
    pal[i][i]=1;
    q=i+1;
    while(j&&q<=n&&a[j]==a[q])
    {
      pal[j][q]=1;
      j--;
      q++;
    }
    j=i;
    q=i+1;
    while(j&&q<=n&&a[j]==a[q])
    {
      pal[j][q]=1;
      j--;
      q++;
    }
    i++;
  }
  deb(f(1,n));
}
