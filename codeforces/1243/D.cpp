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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
set<ll> s;
set<pi> e;
void dfs(ll n)
{
  s.erase(n);
  auto it=s.begin();
  while(it!=s.end())
  {
    if(e.find({n,*it})==e.end())
    {
      ll x=*it;
      dfs(x);
      it=s.lower_bound(x);
    }
    else
      it++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll m,n,l,r;
  cin>>n>>m;
  while(m--)
  {
    cin>>l>>r;
    e.insert({l,r});
    e.insert({r,l});
  }
  ll ans=-1;
  ll i=1;
  while(i<=n)
  {
    s.insert(i);
    i++;
  }
  i=1;
  while(i<=n)
  {
    if(s.find(i)!=s.end())
      {
        ans++;
        dfs(i);
      }
      i++;
  }
  deb(ans)
}