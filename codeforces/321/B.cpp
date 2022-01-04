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
    string s;
  ll n,m,d;
  cin>>n>>m;
  ll i=n;
  vi a,b;
  while(i--)
  {
    cin>>s>>d;
    if(s[0]=='A')
      a.pb(d);
    else
      b.pb(d);
  }
  sort(all(a));
  sort(all(b));
  i=m;
  vi v;
  while(i--)
    {
      cin>>d;
      v.pb(d);
    }
  sort(all(v));
  ll ans=0;
  i=v.size();
  i--;
  ll j=0;
  while(i>-1&&j<a.size())
  {
    if(v[i]>a[j])
    {
      ans+=v[i]-a[j];
      i--;
      j++;
    }
    else
      break;
  }
  if(m>=n)
  {
    vi ex;
    ll sum=0;
    i=0;
    j=0;
    while(i<b.size()&&j<v.size())
    {
      if(v[j]>b[i])
        i++;
      else
        ex.pb(v[j]);
      j++;
    }
    if(i==b.size())
    {
      while(j<v.size())
      {
        ex.pb(v[j]);
        j++;
      }
      i=a.size();
      i--;
      j=ex.size();
      j--;
      while(i>-1&&j>-1)
      {
        if(a[i]>ex[j])
        {
          deb(ans)
          exit(0);
        }
        sum+=ex[j]-a[i];
        i--;
        j--;
      }
      while(j>-1)
      {
        sum+=ex[j];
        j--;
      }
      ans=max(ans,sum);
    }
  }
  deb(ans)
}         