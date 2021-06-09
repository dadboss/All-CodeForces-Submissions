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
#define N 20
#define ld double
ld ans[1ll<<N],a[N][N];
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
  {
    j=0;
    while(j<n)
    {
        cin>>a[i][j];
        j++;
    }
    i++;
  }
  ans[(1ll<<n)-1]=1;
  i=1ll<<n;
  i--;
  ll x,k;
  while(i>-1)
  {
    j=0;
    x=bct(i);
    x=x*(x-1)/2;
    while(j<n)
    {
        if((i>>j)&1)
        {
            k=0;
            while(k<n)
            {
                if(((i>>k)&1)&&(k!=j))
                {
                    //deB(j,k)
                    //ans[i-(1ll<<j)]=ans[i]*a[k][j]/(1.0*x);
                    
                    ans[i-(1ll<<k)]+=ans[i]*a[j][k]/(1.0*x);
                }
                k++;
            }
        }
        j++;
    }
    i--;
  }
  i=0;
  while(i<n)
  {
    cout<<fixed<<setprecision(10)<<ans[1ll<<i]<<" ";
    i++;
  }
}        