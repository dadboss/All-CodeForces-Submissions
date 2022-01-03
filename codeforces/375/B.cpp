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
#define N 5009
string a[N];
ll r[N][N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>n>>m;
  ll i=1,j,ans=0;
  while(i<=n)
  {
    cin>>a[i];
    a[i]='!'+a[i];
    i++;
  }
  vi v;
  j=m;
  while(j)
  {
    v.clear();
    i=1;
    while(i<=n)
    {
      if(a[i][j]=='1')
        r[i][j]=1+r[i][j+1];
      else
        r[i][j]=0;
      v.pb(r[i][j]);
      i++;
    }
    sort(all(v));
    i=0;
    while(i<v.size())
      {
        ans=max(ans,v[i]*(v.size()-i));
        i++;
      }
    j--;
  }
  deb(ans)
}         