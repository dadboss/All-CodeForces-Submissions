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
#define N 300009
ll n;
string s;
ll c[N],dp[N];
ll f(ll i)
{
  if(i>=s.size())
    return 1;
  if(dp[i]!=-1)
    return dp[i];
  ll mx=INT_MAX;
  ll ans=0;
  ll j=i;
  while(j<s.size())
    {
      mx=min(mx,c[s[j]-'a']);
      if(j-i+1>mx)
        break;
      ans+=f(j+1);
      ans%=mod;
      j++;
    }
    return dp[i]=ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    memset(dp,-1,sizeof(dp));
  cin>>n>>s;
  s='!'+s;
  ll i=0;
  while(i<26)
    cin>>c[i++];
  deb(f(1))
  ll ans=1,j;
  i=1;
  while(i<s.size())
  {
    ll mx=INT_MAX;
    j=i;
    while(j<s.size())
    {
      mx=min(mx,c[s[j]-'a']);
      if(j-i+1>mx)
        break;
      ans=max(ans,j-i+1);
      j++;
    }
    i++;
  }
  deb(ans)
  ans=0;
  i=1;
  while(i<s.size())
  {
    ans++;
    ll mx=INT_MAX;
    j=i;
    while(j<s.size())
    {
      mx=min(mx,c[s[j]-'a']);
      if(j-i+1>mx)
        break;
      j++;
    }
    i=j;
  }
  deb(ans)
}         