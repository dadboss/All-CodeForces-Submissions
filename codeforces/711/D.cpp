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
vi t;
ll p[N],v[N],a[N];
ll ans=1,tot=0;
void dfs(ll n)
{
  if(v[n]==1)
    return;
  if(v[n]==2)
  { 
    ll i=t.size();
    i--;
    ll ct=1;
    while(t[i]!=n)
      ct++,i--;
    tot+=ct;
    ans*=(p[ct]-2+mod)%mod;
    ans%=mod;
    return;
  }
  v[n]=2;
  t.pb(n);
  dfs(a[n]);
  v[n]=1;
  t.pop_back();
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  p[0]=1;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i];
    p[i]=2*p[i-1];
    p[i]%=mod;
    i++;
  }
  i=1;
  while(i<=n)
  {
    dfs(i);
    i++;
  }
  ans*=p[n-tot];
  ans%=mod;
  deb(ans)
}         