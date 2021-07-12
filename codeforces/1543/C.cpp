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
#define ld long double
#define md 998244353 
#define mod 1000000007
#define N 200009
ld v;
ld f(ld a,ld b,ld c,bool A,bool B)
{
  ld ans=c;
  if(A==0)
  {
    if(a<=v+1/(1e10))
    {
      if(B)
          ans+=a*(1+f(0,0,1,1,1));
      else
          ans+=a*(1+f(0,b+a/2.0,c+a/2.0,1,0));
    }
    else
    {
      if(B)
          ans+=a*(1+f(a-v,0,c+v,0,1));
      else
          ans+=a*(1+f(a-v,b+v/2.0,c+v/2.0,0,0));
    }
  }
  if(B==0)
  {
    if(b<=v+1/(1e10))
    {
      if(A)
          ans+=b*(1+f(0,0,1,1,1));
      else
          ans+=b*(1+f(a+b/2.0,0,c+b/2.0,0,1));
    }
    else
    {
      if(A)
          ans+=b*(1+f(0,b-v,c+v,1,0));
      else
          ans+=b*(1+f(a+v/2.0,b-v,c+v/2.0,0,0));
    }
  }
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t;
  ld ans,a,b,c;
  cin>>t;
  while(t--)
  {
      cin>>a>>b>>c>>v;
      ans=f(a,b,c,0,0);
      cout<<fixed<<setprecision(15)<<ans<<"\n";
  }
}    