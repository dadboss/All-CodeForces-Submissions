#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
ll a[N],v[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,i,n,k,ans,x;
  cin>>t;
  while(t--)
  {
    set<pi> s,p,pos;
    cin>>n>>k;
    i=1;
    while(i<=k)
    {
      cin>>a[i];
      pos.insert({a[i],i});
      i++;
    }
    i=1;
    while(i<=k)
    {
      cin>>v[i];
      s.insert({v[i]+a[i],i});
      i++;
    }
    i=1;
    while(i<=n)
    {
      ans=1e13;
      if(!s.empty())
        ans=s.begin()->ff-i;
      if(!p.empty())
        ans=min(ans,p.begin()->ff+i);
      if(!pos.empty()&&pos.begin()->ff==i)
      {
        x=pos.begin()->ss;
        pos.erase(pos.begin());
        s.erase({v[x]+a[x],x});
        p.insert({v[x]-a[x],x});
      }
      cout<<ans<<" ";
      i++;
    }
    cout<<"\n";
  }
}    