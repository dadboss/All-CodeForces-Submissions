#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define N 200009
ll X[N],Y[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll x,y,i,j;
  cin>>i>>j>>x>>y;
  x-=i;
  y-=j;
  ll n;
  string s;
  cin>>n>>s;
  i=1;
  while(i<=n)
  {
    X[i]=X[i-1];
    Y[i]=Y[i-1];
    if(s[i-1]=='U')
      Y[i]++;
    if(s[i-1]=='D')
      Y[i]--;
    if(s[i-1]=='R')
      X[i]++;
    if(s[i-1]=='L')
      X[i]--;
    i++;
  }
  ll st=0;
  ll m,e=1e14;
  ll ans=1e15;
  while(st<=e)
  {
    m=(st+e)/2;
    i=(m/n)*X[n]+X[m%n];
    j=(m/n)*Y[n]+Y[m%n];
    i=abs(i-x);
    j=abs(j-y);
    if(i+j<=m)
      ans=m,e=m-1;
    else
      st=m+1;
  }
  if(ans==1e15)
    ans=-1;
  deb(ans)
}    