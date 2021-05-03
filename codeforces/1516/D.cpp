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
#define N 200009
#define LG 20
vi a[N];
ll pos[N];
ll b[N];
ll par[LG][N],n;
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
void precompute()
{
  for(ll i=1;i<LG;i++)
  {
    for(ll j=1;j<=n+1;j++)
    {
          par[i][j]=par[i-1][par[i-1][j]];
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  ll q;
  cin>>n>>q;
    ll i=2,j;
    while(i<=100000)
    {
      if(a[i].empty())
      {
        pos[i]=n+1;
        j=i;
        while(j<=100000)
          a[j].pb(i),j+=i;
      }
      i++;
    }
  i=1;
  while(i<=n)
    cin>>b[i++];
  i=n;
  par[0][n+1]=n+1;
  while(i)
  {
    par[0][i]=par[0][i+1];
    for(auto x:a[b[i]])
      par[0][i]=min(par[0][i],pos[x]),pos[x]=i;
    //deB(i,par[0][i])
    i--;
  }
  precompute();
  ll l,r,ans;
  while(q--)
  {
    cin>>l>>r;
    i=LG-1;
    ans=1;
    while(i>-1)
    {
      if(par[i][l]<=r)
      {
        ans+=(1ll<<i);
        l=par[i][l];
      }
      i--;
    }
    deb(ans)
  } 
}