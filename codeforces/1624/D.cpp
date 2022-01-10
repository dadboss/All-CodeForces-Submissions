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
ll f[26];
bool F(ll m,ll k,ll e,ll o)
{
  if(m==1)
    return 1;
  if(m%2)
  {
    ll x=min({o,k,e/(m-1)});
    k-=x;
    e-=x*(m-1);

    return e/m>=k;
  }
  else
    return k*m<=e;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    string s;
  ll T,tt=1,n,k,o,st,e,m,i,ans,ev;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>k>>s;
    memset(f,0,sizeof(f));
    for(auto x:s)
      f[x-'a']++;
    i=ev=o=0;
    while(i<26)
    {
      ev+=2*(f[i]/2);
      o+=f[i]%2;
      i++;
    }
    st=1;
    e=n;
    while(st<=e)
    {
      m=(st+e)/2;
      if(F(m,k,ev,o))
        ans=m,st=m+1;
      else
        e=m-1;
    }
    //deb(F(3,k,ev,o))
    deb(ans)
  }
}         