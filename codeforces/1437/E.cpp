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
#define N 500009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,k,j,x;
  cin>>n>>k;
  ll i=1;
  a[0]=LLONG_MIN;
  a[n+1]=LLONG_MAX;
  while(i<=n)
  {
    cin>>a[i];
    a[i]-=i;
    i++;
  }
  vi v;
  v.pb(0);
  ll d;
  while(k--)
  {
    cin>>d;
    v.pb(d);
  }
  v.pb(n+1);
  sort(all(v));
  i=1;
  ll cnt,ans=0;
  while(i<v.size())
  {
    if(a[v[i]]<a[v[i-1]])
    {
      deb(-1)
      reto;
    }
    j=v[i-1]+1;
    vi ls;
    while(j<v[i])
    {
      if(a[j]>=a[v[i-1]]&&a[j]<=a[v[i]])
      {
        if(ls.empty()||a[j]>=ls.back())
          ls.pb(a[j]);
        else if(!ls.empty())
        {
          x=upper_bound(all(ls),a[j])-ls.begin();
          ls[x]=a[j];
        }
      }
      j++;
    }
    ans+=v[i]-v[i-1]-1-ls.size();
    //deB(i,ans)
    i++;
  }
  deb(ans)
}