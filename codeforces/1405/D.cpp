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
#define N 100009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
vi a[N];
ll b,da,mxd,bn,best;
bool f;
void dfs(ll n,ll p,ll d)
{
  //Deb(n,p,d)
  if(n==b&&d<=da)
    f=1;
  if(d>best)
  {
    bn=n;
    best=d;
  }
  for(auto x:a[n])
  {
    if(x!=p) dfs(x,n,d+1);
  }
}
void fds(ll n,ll p,ll d)
{
  mxd=max(mxd,d);
  for(auto x:a[n])
    if(x!=p) fds(x,n,d+1);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,q,db,i,l,r;
  cin>>t;
  while(t--)
  {
    cin>>n>>q>>b>>da>>db;
    i=n-1;
    while(i--)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
    }
    f=0;
    mxd=best=0;
    dfs(q,-1,0);
    if(f)
      {
        deb("Alice")
      }
    else{
    //YES
    fds(bn,-1,0);
    i=1;
    da=min(da,mxd);
    db=min(db,mxd);
    if(db>2*da)
      deb("Bob")
    else
      deb("Alice")
  }
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
  }
}