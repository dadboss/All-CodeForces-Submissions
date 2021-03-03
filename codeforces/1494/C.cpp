#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 500009
vi a,b,c,e;
ll s[N];
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll f()
{
  if(e.empty()||b.empty())
    return 0;
  ll i=2*b.size()+1,j=e.size()-1;
  while(i>-1)
  {
    s[i]=0;
    i--;
  }
  i=b.size()-1;
  s[i+1]=0;
  while(i>-1&&j>-1)
  {
    s[i]=s[i+1];
    if(b[i]==e[j])
    {
      s[i]++;
      i--;
      j--;
    }
    else if(b[i]<e[j])
      j--;
    else
      i--;   
  }
  while(i>-1)
  {
    s[i]=s[i+1];
    i--;
  }
  ll u,ans=s[0];
  i=1;
  while(i<=b.size())
  {
    u=lower_bound(all(e),b[i-1])-e.begin();
    ll mx;
    if(i==b.size())
      mx=1e10;
    else
      mx=b[i];
    while(u<e.size()&&e[u]<mx)
    {
      ll k=lower_bound(all(e),e[u]-i+1)-e.begin();
      ans=max(ans,s[i]+u-k+1);
      u++;
    }
    i++;
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
  ll t=1,i,d,n,m,ans;
  cin>>t;
  while(t--)
  {
    a.clear();
    b.clear();
    c.clear();
    e.clear();
    cin>>n>>m;
    i=n;
    while(i--)
    {
      cin>>d;
      if(d<0)
        a.pb(-d);
      else
        b.pb(d);
    }
    i=m;
    while(i--)
    {
      cin>>d;
      if(d<0)
        c.pb(-d);
      else
        e.pb(d);
    }
    //ans=0;
    ans=f();
    //deb(ans)
    //YES
    reverse(all(a));
    reverse(all(c));
    b=a;
    e=c;
    deb(ans+f())
  }
} 