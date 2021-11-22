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
set<ll> s,l,r;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,a,b,i;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>a>>b;
    l.clear();
    r.clear();
    s.clear();
    i=1;
    while(i<=n)
    {
      s.insert(i);
      i++;
    }
    l.insert(a);
    r.insert(b);
    s.erase(a);
    s.erase(b);
    i=b+1;
    while(i<=n)
    {
      l.insert(i);
      if(s.find(i)!=s.end())
        s.erase(i);
      i++;
    }
    i=1;
    while(i<a)
    {
      r.insert(i);
      if(s.find(i)!=s.end())
        s.erase(i);
      i++;
    }
    if(l.size()>n/2||r.size()>n/2)
      deb(-1)
    else
    {
      while(l.size()!=n/2)
      {
        l.insert(*s.begin());
        s.erase(s.begin());
      }
      while(r.size()!=n/2)
      {
        r.insert(*s.begin());
        s.erase(s.begin());
      }
      for(auto x:l)
        cout<<x<<" ";
      for(auto x:r)
        cout<<x<<" ";
      cout<<"\n"; 
    }
  }
}         