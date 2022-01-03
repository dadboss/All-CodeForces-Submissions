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
map<ll,ll> f;
map<pi,ll> m;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,l,r,c,mn,mx,ans;
  cin>>T;
  while(T--)
  {
    m.clear();
    f.clear();
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    mx=0;
    mn=INT_MAX;
    while(n--)
    {
      cin>>l>>r>>c;
      if(m.find({l,r})==m.end())
        m[{l,r}]=c;
      m[{l,r}]=min(m[{l,r}],c);
      if(f.find(l)==f.end())
        f[l]=c;
      if(f.find(r)==f.end())
        f[r]=c;
      f[l]=min(f[l],c);
      f[r]=min(f[r],c);
      mx=max(mx,r);
      mn=min(mn,l);
      ans=INT_MAX;
      if(m.find({mn,mx})!=m.end())
        {
          ans=m[{mn,mx}];
        }
      deb(min(ans,f[mn]+f[mx]))
    }
  }
}         