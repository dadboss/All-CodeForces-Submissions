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
ll b[N],vis[N],p[N],dis[N],d[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,par,rt,prevd;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=1;
    while(i<=n)
    {
      d[i]=0;
      vis[i]=0;
      dis[i]=0;
      i++;
    }
    i=1;
    while(i<=n)
    {
      cin>>b[i];
      if(b[i]==i)
        rt=i;
      i++;
    }
    i=1;
    while(i<=n)
      cin>>p[i++];
    if(p[1]!=rt)
    {
      deb(-1)
      cont;
    }
    vis[rt]=1;
    prevd=1;
    i=2;
    while(i<=n)
    {
      par=b[p[i]];
      if(vis[par]==0)
        break;
      d[p[i]]=prevd;
      dis[p[i]]=d[p[i]]-d[par];
      vis[p[i]]=1;
      prevd++;
      i++;
    }
    if(i<=n)
    {
      deb(-1)
      cont;
    }
    i=1;
    while(i<=n)
    {
      cout<<dis[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}  