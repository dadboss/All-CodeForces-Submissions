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
vector<ll> a[N];
ll cnt[N],val[N];
ll u;
ll dfs(ll n,ll p)
{
  ll tot=1;
  for(auto x:a[n])
    if(x!=p)
      tot+=dfs(x,n);
  cnt[n]=(u-tot)*tot;
  return tot;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,l,r,m,ans,j;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
    u=n;
    i=n-1;
    while(i--)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
    }
    cin>>m;
    i=0;
    while(i<m)
      cin>>val[i++];
    sort(val,val+m);
    dfs(1,-1);
    sort(cnt+1,cnt+1+n);
    if(m<=n-1)
    {
      j=m-1;
      i=n;
      ans=0;
      while(i>1)
      {
        if(j>-1)
          ans+=cnt[i]*val[j];
        else
          ans+=cnt[i];
        ans%=mod;
        i--;
        j--;
      }
    }
    else
    {
      i=2;
      j=0;
      ans=0;
      while(i<n)
      {
        ans+=cnt[i]*val[j];
        i++;
        j++;
        ans%=mod;
      }
      i=1;
      while(j<m)
      {
        i*=val[j];
        j++;
        i%=mod;
      }
      ans+=cnt[n]*i;
      ans%=mod;
    }
    deb(ans)
  }
}