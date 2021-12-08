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
ll dp[109][2009];
struct wer
{
  ll p,t,d,ind;
};
wer a[N];
ll f(ll i,ll elap)
{
  if(i==n||elap>2001)
    return 0;
  if(dp[i][elap]!=-1)
    return dp[i][elap];
  ll ans=f(i+1,elap);
  if(elap+a[i].t<a[i].d)
    ans=max(ans,a[i].p+f(i+1,elap+a[i].t));
  return dp[i][elap]=ans;
}
bool cmp(wer a,wer b)
{
  return a.d<b.d;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    memset(dp,-1,sizeof(dp));
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>a[i].t>>a[i].d>>a[i].p;
    a[i].ind=i;
    i++;
  }
  sort(a,a+n,cmp);
  deb(f(0,0))
  vi ans;
  i=0;
  ll elap=0;
  while(i<n)
  {
    if(elap+a[i].t<a[i].d&&a[i].p+f(i+1,elap+a[i].t)>f(i+1,elap))
      ans.pb(a[i].ind+1),elap+=a[i].t;
    i++;
  }
  deb(ans.size())
  for(auto x:ans)
    cout<<x<<" ";
}         