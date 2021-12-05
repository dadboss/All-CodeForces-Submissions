#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 100009
ll a[N],n,p[N],dp[109][N];
ll f(ll i,ll num)
{
  if(i==n)  
    return 0;
  if(dp[i][num]!=-1)
    return dp[i][num];
  ll ans=a[i]-1+f(i+1,num);
  ll j=2,k;
  while(j<59)
  {
    if((p[j]&num)==0)
      ans=min(ans,abs(a[i]-j)+f(i+1,(num+p[j])));
    j++;
  }
  return dp[i][num]=ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    memset(dp,-1,sizeof(dp));
  ll i=2,j,ct=0;
  while(i<59)
  {
    if(p[i]==0)
    {
      j=i;
      while(j<59)
      {
        p[j]+=(1ll<<ct);
        j+=i;
      }
      ct++;
    }
    //deB(i,p[i])
    i++;
  }
  cin>>n;
  i=0;
  while(i<n)
    cin>>a[i++];
  f(0,0);
  i=0;
  ll num=0,ans,ind;
  while(i<n)
  {
    ans=a[i]-1+dp[i+1][num];
    ind=1;
    j=2;
    while(j<59)
    {
      if((p[j]&num)==0&&abs(a[i]-j)+dp[i+1][num+p[j]]<ans)
        ans=abs(a[i]-j)+dp[i+1][num+p[j]],ind=j;
      j++;
    }
    cout<<ind<<" ";
    num+=p[ind];
    i++;
  }
}         