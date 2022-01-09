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
multiset<pi> s;
ll l[N],r[N];
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
  while(i<=n)
  {
    cin>>l[i]>>r[i];
    s.insert({l[i],1});
    s.insert({r[i],-1});
    i++;
  }
  vi v;
  i=1;
  while(i<=n)
  {
    pi p={l[i],1};
    s.erase(s.find(p));
    p={r[i],-1};
    s.erase(s.find(p));
    ll prev=0;
    for(auto x:s)
    {
      if(x.ss*prev==1)
        {prev=-10;break;}
      prev=x.ss;
    }
    if(prev!=-10)
      v.pb(i);
    s.insert({l[i],1});
    s.insert({r[i],-1});
    i++;
  }
  deb(v.size())
  for(auto x:v)
    cout<<x<<" ";
}        
