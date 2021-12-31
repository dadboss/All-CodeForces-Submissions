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
map<string,ll> m;
map<ll,ll> M;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll tot=0,lk=0,i,best;
  string s,a;
  ll f[26];
  while(n--)
  {
    cin>>s;
    memset(f,0,sizeof(f));
    for(auto x:s)
      f[x-'a']^=1;
    i=0;
    a.clear();
    while(i<26)
    {
      if(f[i]==1)
        a+='a'+i;
      i++;
    }
    if(a.empty())
      tot++;
    else
      m[a]++;
  }
  ll ans=(tot*(tot-1))/2;
  for(auto X:m)
  {
    ll num=0;
    for(auto x:X.ff)
      num+=(1ll<<(x-'a'));
    M[num]+=X.ss;
    i=0;
    while(i<26)
    {
      if((1ll<<i)&num)
      {
        ans+=M[num-(1ll<<i)]*X.ss;
      }
      else
      {
        ans+=M[num+(1ll<<i)]*X.ss;
      }
      i++;
    }
    ll x=X.ss;
    //deB(X.ff,X.ss)
    ans+=(x*(x-1))/2;
    if(X.ff.size()==1)
      ans+=tot*x;
  }
  deb(ans)
}         