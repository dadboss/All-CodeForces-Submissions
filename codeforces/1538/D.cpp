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
#define N 200009
ll a[N];
vi v;
ll f(ll a)
{
  ll ans=0;
  for(auto x:v)
  {
    while(a%x==0)
    {
      a/=x;
      ans++;
    }
  }
  if(a>1)
    ans++;
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    ll i=2,j;
    while(i*i<=1000000000)
    {
      if(a[i]==0)
      {
        v.pb(i);
        j=i*i;
        while(j*j<=1000000000)
        {
          a[j]=1;
          j+=i;
        }
      }
      i++;
    }
  ll t,a,b,k,mx;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>k;
    mx=f(a)+f(b); 
    if(k==1)
    {
      if(a!=b&&(a%b==0||b%a==0))
        YES
      else
        NO
    }
    else
    {
      if(k<=mx)
        YES
      else
        NO
    }
  }
}    