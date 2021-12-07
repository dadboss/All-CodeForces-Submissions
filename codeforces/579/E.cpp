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
ll a[N];
double f(double x)
{
  ll i=0;
  double mx=0,mn=0,ba=0;
  while(i<n)
  {
    if(mx+a[i]-x>0)
      mx+=a[i]-x;
    else
      mx=0;
    if(mn-(a[i]-x)>0)
      mn-=a[i]-x;
    else
      mn=0;
    ba=max({ba,mx,mn});
    i++;
  }
  return ba;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  double r=1e5;
    double l=-r;
    double ans=LLONG_MAX;
    while (l+0.0000000000001 <= r) {
      double ml = l + (r - l) / 3.0, mr = r - (r - l) / 3.0;
      double dl = f(ml), dr = f(mr);
      if (dl <= dr)
        r = mr ;
      if (dl >= dr)
        l = ml ;
    ans=min({ans,dl,dr});
    }
    cout<<fixed<<setprecision(10)<<ans;
}         