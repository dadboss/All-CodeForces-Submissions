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
ll vis[N],ans[N];
vi v;
int main()
{
 
  ll T,tt=1,n,i,origi,x,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=1;
    while(i<=n)
    {
      vis[i]=0;
      i++;
    }
    i=1;
    while(i<=n)
    {
      if(vis[i])
      {
        i++;
        cont;
      }
      v.clear();
      cout<<"? ";
      deb(i)
      cin>>origi;
      v.pb(origi);
      x=-1;
      while(x!=origi)
      {
        cout<<"? ";
        deb(i);
        cin>>x;
        v.pb(x);
      }
      j=1;
      while(j<v.size())
      {
        ans[v[j-1]]=v[j];
        vis[v[j]]=1;
        j++;
      }
      i++;
    }
    cout<<"! ";
    i=1;
    while(i<=n)
    {
      cout<<ans[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}         