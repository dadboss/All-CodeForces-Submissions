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
vi a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,k,d,ind,j;
  cin>>n>>k;
  k--;
  ll i=1;
  while(i<=n)
  {
    cin>>d;
    a[d].pb(i);
    i++;
  }
  if(a[0].size()!=1||a[1].size()>k+1)
  {
    deb(-1)
    reto
  }
  i=2;
  while(i<=n)
  {
    if(a[i].size()>k*a[i-1].size())
    {
      deb(-1)
      reto
    }
    i++;
  }
  deb(n-1)
  for(auto x:a[1])
    deB(a[0][0],x)
  i=2;
  while(i<=n)
  {
    ind=-1;
    j=0;
    while(j<a[i].size())
    {
      if(j%k==0)
        ind++;
      deB(a[i-1][ind],a[i][j]);
      j++;
    }
    i++;
  }
}         