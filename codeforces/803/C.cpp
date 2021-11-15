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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,k,i,x;
  cin>>n>>k;
  if(k>n)
  {
    deb(-1)
    reto
  }
  if(k>141500||k*(k+1)/2>n)
  { 
    deb(-1)
    reto
  }
  ll mx=n/((k*(k+1))/2);
  ll ans=0;
  i=1;
  while(i*i<=n)
  {
    if(n%i==0)
    {
      x=i;
      if(x<=mx&&x*k*(k+1)/2<=n)
        ans=max(ans,x);
      x=n/i;
      if(x<=mx&&x*k*(k+1)/2<=n)
        ans=max(ans,x);
    }
    i++;
  }
  if(ans==0)
  {
    deb(-1)
    reto
  }
  i=1;
  while(i<k)
  {
    cout<<i*ans<<" ";
    n-=i*ans;
    i++;
  }
  deb(n)
}         