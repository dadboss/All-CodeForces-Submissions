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
#define N 400009
ll v[N];
vi a[N];
void dfs(ll n,bool in)
{
  if(v[n]==-1)
    return;
  if(in)
  {
    v[n]=-1;
    for(auto x:a[n])
      dfs(x,1);
    return;
  }
  if(v[n]==1)
  {
    dfs(n,1);
    return;
  }
  if(v[n]==2)
    {
      v[n]=3;
      for(auto x:a[n])
        dfs(x,0);
      return;
    }
  if(v[n]==3)
    return;
  v[n]=1;
  for(auto x:a[n])
    dfs(x,0);
  if(v[n]==1)
    v[n]=2;
  return;

}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,n,m,l,r,i;
  cin>>t;
  while(t--)
  {
      cin>>n>>m;
      i=1;
      while(i<=n)
      {
        a[i].clear();
        v[i]=0;
        i++;
      }
      while(m--)
      {
        cin>>l>>r;
        a[l].pb(r);
      }
      dfs(1,0);
      i=1;
      while(i<=n)
      {
        if(v[i]<1)
          cout<<v[i]<<" ";
        else
          cout<<v[i]-1<<" ";
        i++;
      }
      cout<<"\n";
  }
}    