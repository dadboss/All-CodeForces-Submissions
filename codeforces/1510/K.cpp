#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll a[N],b[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,ans,adj,acc;
  cin>>n;
  ll i=1;
  while(i<=n+n)
    cin>>a[i++];
  if(n%2)
  {
    i=1;
    while(i<=n+n&&a[i]==i)
      i++;
    if(i==2*n+1)
    {
      deb(0)
      reto;
    }
    i=1;
    while(i<=2*n)
    {
      b[i]=a[i];
      i++;
    }
    ans=1;
    while(ans<3000)
    {
      if(ans%2)
      {
          i=1;
          while(i<=2*n)
          {
            swap(a[i],a[i+1]);
            i+=2;
          }
          i=1;
          while(i<=2*n&&a[i]==i)
            i++;
          if(i==2*n+1)
          {
            deb(ans)
            reto;
          }
          i=1;
          while(i<=n)
          {
            swap(b[i],b[i+n]);
            i++;
          }
          i=1;
          while(i<=2*n&&b[i]==i)
            i++;
          if(i==2*n+1)
          {
            deb(ans)
            reto;
          }
    }
    else
    {
      i=1;
          while(i<=2*n)
          {
            swap(b[i],b[i+1]);
            i+=2;
          }
          i=1;
          while(i<=2*n&&b[i]==i)
            i++;
          if(i==2*n+1)
          {
            deb(ans)
            reto;
          }
          i=1;
          while(i<=n)
          {
            swap(a[i],a[i+n]);
            i++;
          }
          i=1;
          while(i<=2*n&&a[i]==i)
            i++;
          if(i==2*n+1)
          {
            deb(ans)
            reto;
          }
    }
    ans++;
    }
    deb(-1)
    return 0;
  }
  else
  {
    adj=0;
    acc=0;
    ans=0;
    vi v;
    v.pb(a[1]);
    v.pb(a[2]);
    v.pb(a[n+1]);
    v.pb(a[n+2]);
    if(a[1]>a[2])
    {
      ans++;
      adj=1;
    } 
    if(max(a[1],a[2])>max(a[n+1],a[n+2]))
    {
      ans++;
      acc=1;
    }
    if(adj)
    {
      i=1;
      while(i<=2*n)
      {
        swap(a[i],a[i+1]);
        i+=2;
      }
    }
    if(acc)
    {
      i=1;
      while(i<=n)
      {
        swap(a[i],a[i+n]);
        i++;
      }
    }
    i=1;
    while(i<=2*n&&a[i]==i)
      i++;
    if(i==2*n+1)
      deb(ans)
    else
      deb(-1)
  }
}