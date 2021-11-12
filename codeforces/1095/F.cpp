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
pi a[N];
ll parent[N],red[N];
ll findParent(ll i)
{
    if(parent[parent[i]]!=parent[i])
        parent[i]=findParent(parent[i]);
    return parent[i];
}
void unionNodes(ll a,ll b) /// pass parents in this function
{
  if(red[a]<red[b])
    swap(a,b);
  parent[b]=a;
  red[a]+=red[b];
  return;
}
set<pair<ll,pi>> s;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>n>>m;
  ll i=1;
  while(i<=n)
  {
    parent[i]=i;
    red[i]=1;
    i++;
  }
  i=1;
  while(i<=n)
  {
    cin>>a[i].ff;
    a[i].ss=i;
    i++;
  }
  sort(a+1,a+n+1);
  i=2;
  while(i<=n)
  {
    s.insert({a[i].ff+a[1].ff,{a[1].ss,a[i].ss}});
    i++;
  }
  ll l,r,w;
  while(m--)
  {
    cin>>l>>r>>w;
    s.insert({w,{l,r}});
  }
  ll ans=0;
  for(auto x:s)
  {
    l=x.ss.ff;
    r=x.ss.ss;
    l=findParent(l);
    r=findParent(r);
    if(l!=r)
    {
      ans+=x.ff;
      unionNodes(l,r);
    }
  }
  deb(ans)
}         