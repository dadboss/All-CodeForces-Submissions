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
ll a[N],b[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,x,k,y;
  cin>>n>>m>>x>>k>>y;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  while(i<n)
    cin>>b[i++];
  i=0;
  ll j=0;
  ll ans=0,mb,mx,l,ml,X;
  while(i<n)
  {
    if(j==m||a[i]!=b[j])
    {
        mb=mx=l=0;
        if(i)
            mb=a[i-1];
        while(i<n&&a[i]!=b[j])
            mx=max(mx,a[i]),l++,i++;
        if(i<n)
            mb=max(mb,a[i]);
        if(l<k&&mb<mx)
        {
            deb(-1)
            reto;
        }
        X=l%k;
        l-=X;
        ans+=y*X;
        //Deb(l,mx,mb)
        if(mb>mx)
            ans+=min(y*l,(l/k)*x);
        else if(l)
        {
            ans+=x;
            l-=k;
            ans+=min(y*l,(l/k)*x);
        }
        //deb(ans)
    }
    else
        i++,j++;
  } 
  if(j!=m)
  {
    deb(-1)
    reto;
  }
  deb(ans)
}        