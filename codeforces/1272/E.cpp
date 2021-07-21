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
ll a[N],d[N],ans[N];
vi g[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=1;
  queue<ll> q;
  while(i<=n)
  {
    d[i]=mod;
    cin>>a[i];
    if(i-a[i]>0)
        g[i-a[i]].pb(i);
    if(a[i]+i<=n)
        g[a[i]+i].pb(i);
    if(a[i]%2==0)
        d[i]=0,q.push(i);
    i++;
  }
  while(!q.empty())
  {
    i=q.front();
    q.pop();
    for(auto x:g[i])
    {
        if(d[x]>1+d[i])
        {
            d[x]=1+d[i];
            q.push(x);
        }
    }
  }
  i=1;
  while(i<=n)
  {
    if(a[i]%2)
    {
        if(d[i]==mod)
            ans[i]=-1;
        else
            ans[i]=d[i];
        d[i]=0;
        q.push(i);
    }
    else
        d[i]=mod;
    i++;
  }
  while(!q.empty())
  {
    i=q.front();
    q.pop();
    for(auto x:g[i])
    {
        if(d[x]>1+d[i])
        {
            d[x]=1+d[i];
            q.push(x);
        }
    }
  }
  i=1;
  while(i<=n)
  {
    if(a[i]%2)
        cout<<ans[i]<<" ";
    else
    {
        if(d[i]==mod)
            d[i]=-1;
        cout<<d[i]<<" ";
    }
    i++;
  }
}        