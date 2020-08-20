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
//#define mod 1000000007
#define mod 998244353 
#define N 300009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll fac(ll n)
{
  ll ans=1;
  while(n)
  {
    ans*=n;
    n--;
    ans%=mod;
  }
  return ans;
}
pi p[N];
map<pi,ll> m;
map<ll,ll> ml,mr;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,ans=1,l=1,r=1;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>p[i].ff>>p[i].ss;
    m[{p[i].ff,p[i].ss}]++;
    ml[p[i].ff]++;
    mr[p[i].ss]++;
    l*=ml[p[i].ff];
    r*=mr[p[i].ss];
    l%=mod;
    r%=mod;
    ans*=i;
    ans%=mod;
    i++;
  }
  ans-=(l+r);
  ans+=2*mod;
  ans%=mod;
  sort(p+1,p+n+1);
  i=2;
  while(i<=n&&p[i].ss>=p[i-1].ss)
    i++;
  if(i==n+1)
  {
    l=1;
    for(auto x:m)
    {
      l*=fac(x.ss);
      l%=mod;
    }
    ans+=l;
    ans%=mod;
  }
  deb(ans)
}