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
#define N 500009
ll x[N],l[N],r[N],p[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>x[i];
    if(x[i]==1)
      cin>>l[i];
    else
      cin>>l[i]>>r[i];
    i++;
  }
  i=1;
  while(i<N)
  {
    p[i]=i;
    i++;
  }
  i=n-1;
  vi v;
  while(i>-1)
  {
    if(x[i]==1)
      v.pb(p[l[i]]);
    else
      p[l[i]]=p[r[i]];
    i--;
  }
  while(!v.empty())
    {cout<<v.back()<<" ";v.pop_back();}
}         