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
vi v;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d,l,r,ans;
  cin>>n>>d;
  ll i=1;
  while(i<=n)
  {
    parent[i]=i;
    red[i]=1;
    i++;
  }
  ll k=1;
  ll ex=0;
  while(d--)
  {
    cin>>l>>r;
    l=findParent(l);
    r=findParent(r);
    if(l!=r)
      unionNodes(l,r);
    else
      ex++;
    v.clear();
    i=1;
    while(i<=n)
    {
      if(i==findParent(i))
        v.pb(red[i]);
      i++;
    }
    sort(all(v),greater<ll>());
    i=ans=0;
    while(i<=ex)
    {
      ans+=v[i];
      i++;
    }
    deb(ans-1)
    k++;
  }
}         