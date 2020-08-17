#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 100009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll l[N],r[N],v[N];
ll a[N][34];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,x,ans,j;
  cin>>n>>m;
  ll i=0;
  while(i<m)
  {
    cin>>l[i]>>r[i]>>v[i];
    x=v[i];
    j=30;
    while(j>-1)
    {
      if((x>>j)&1)
      {
        a[l[i]][j]++;
        a[r[i]+1][j]--;
      }
      j--;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    j=0;
    while(j<31)
    {
      a[i][j]+=a[i-1][j];
      j++;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    j=0;
    while(j<31)
    {
      a[i][j]=min(a[i][j],1ll);
      j++;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    j=0;
    while(j<31)
    {
      a[i][j]+=a[i-1][j];
      j++;
    }
    i++;
  }
  i=0;
  while(i<m)
  {
    j=0;
    ans=0;
    while(j<31)
    {
      if(a[r[i]][j]-a[l[i]-1][j]==r[i]-l[i]+1)
        ans+=(1ll<<j);
      j++;
    }
    if(ans!=v[i])
    {
      NO
      return 0;
    }
    i++;
  }
  YES
  i=1;
  while(i<=n)
  {
    j=0;
    ans=0;
    x=1;
    while(j<31)
    {
      if(a[i][j]>a[i-1][j])
      {
        ans+=x;
      }
      x*=2;
      j++;
    }
    cout<<ans<<" ";
    i++;
  }
}