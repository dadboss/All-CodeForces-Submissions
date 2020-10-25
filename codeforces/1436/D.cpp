#include<bits/stdc++.h>
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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
vi a[N];
ll c[N];
ll ans;
ll dfs(ll n)
{
  ll sum=c[n],l=0,mx=0;
  if(a[n].empty())
    {
      l=1;
      ans=max(ans,c[n]);
    }
  for(auto x:a[n])
  {
    l+=dfs(x);
    sum+=c[x];
    mx=max(mx,c[x]);
  }
  //c[n]=max(mx,(sum+l-1)/l);
  c[n]=sum;
  ans=max({ans,(sum+l-1)/l});
  //deB(n,ans)
  //deb(c[n])
  return l;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d;
  cin>>n;
  ll i=2;
  while(i<=n)
  {
    cin>>d;
    a[d].pb(i);
    i++;
  }
  i=1;
  while(i<=n)
    cin>>c[i++];
  dfs(1);
  deb(ans)
}