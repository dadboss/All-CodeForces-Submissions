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
#define N 5009
#define ld long double
ll a[N],f[N],F[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=0,j;
  while(i<n)
      cin>>a[i++];
  i=0;
  while(i<n)
  {
    j=i+1;
    while(j<n)
    {
        f[abs(a[i]-a[j])]++;
        F[abs(a[i]-a[j])]++;
        j++;
    }
    i++;
  }
  i=n*(n-1)/2;
  ld ans=1.0;
  ans/=(1.0*i);
  ans/=(1.0*i);
  ans/=(1.0*i);
  i=2;
  while(i<5000)
  {
    f[i]+=f[i-1];
    i++;
  }
  i=5000;
  ll s,num=0;
  while(i)
  {
    if(F[i]==0)
    {
        i--;
        cont;
    }
    j=i-1;
    s=0;
    while(j)
    {
        if(F[j]==0)
        {
            j--;
            cont;
        }
        while(s+j<i)
            s++;
        num+=F[i]*F[j]*f[s-1];
        j--;
    }
    i--;
  }
  ans*=1.0*num;
  cout<<fixed<<setprecision(10)<<ans;
}        