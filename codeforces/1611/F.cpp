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
#define N 200009
ll a[N],t[4*N];
void build(ll a[], ll v, ll tl, ll tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = min(t[v*2] , t[v*2+1]);
    }
}
ll sum(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) 
        return 1e16;
    if (l == tl && r == tr) {
        return t[v];
    }
    ll tm = (tl + tr) / 2;
    return min(sum(v*2, tl, tm, l, min(r, tm))
           , sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,k,ans,best,l,m,mn,s,e,i;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>k;
    i=1;
    while(i<=n)
    {
      cin>>a[i];
      a[i]+=a[i-1];
      i++;
    }
    build(a,1,1,n);
    l=0;
    i=1;
    while(i<=n)
    {
      s=i;
      e=n;
      ans=-1;
      while(s<=e)
      {
        m=(s+e)/2;
        mn=sum(1,1,n,i,m);
        if(k-a[i-1]+mn>-1)
          s=m+1,ans=m;
        else
          e=m-1;
      }
      if(ans-i+1>l)
        l=ans-i+1,best=i;
      i++;
    }
    if(l==0)
      deb(-1)
    else
      deB(best,best+l-1)
  }
}         