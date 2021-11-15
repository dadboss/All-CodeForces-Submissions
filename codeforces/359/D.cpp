#include<bits/stdc++.h>
using namespace std;
#define ll int
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
ll a[N],t[4*N];
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = __gcd(t[v*2] , t[v*2+1]);
    }
}
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return __gcd(sum(v*2, tl, tm, l, min(r, tm))
           , sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
vi o[1000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,j,g,mn;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i],o[a[i]].pb(i),i++;
  build(a,1,1,n);
  ll s=1,e=n,m;
  ll ans;
  while(s<=e)
  {
    m=(s+e)/2;
    i=1;
    j=m;
    while(j<=n)
    {
      g=sum(1,1,n,i,j);
      mn=lower_bound(all(o[g]),i)-o[g].begin();
      if(mn<o[g].size()&&o[g][mn]<=j)
        break;
      j++;
      i++;
    }
    if(j>n)
      e=m-1;
    else
      s=m+1,ans=m;
  }
  vi v;
  i=1;
  j=ans;
  while(j<=n)
  {
    g=sum(1,1,n,i,j);
     mn=lower_bound(all(o[g]),i)-o[g].begin();
      if(mn<o[g].size()&&o[g][mn]<=j)
        v.pb(i);
    i++;
    j++;
  }
  deB(v.size(),ans-1)
  for(auto x:v)
    cout<<x<<" ";
}         