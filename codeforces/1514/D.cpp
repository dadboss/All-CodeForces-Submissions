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
#define N 300009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll fin[N],a[N],f[N],ct[N];
ll blk=1000;
struct qu
{
  ll l,r,ind;
};
qu q[N];
bool cmp(qu a,qu b)
{
  if(a.l/blk!=b.l/blk)
    return a.l/blk<b.l/blk;
  return a.r<b.r;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,t,l,x;
  cin>>n>>t;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  blk=ceil(sqrt(n));
  i=0;
  while(i<t)
  {
    cin>>q[i].l>>q[i].r;
    q[i].ind=i;
    i++;
  }
  sort(q,q+t,cmp);
  ll ans=0,ml=0,mr=-1;
  i=0;
  ct[0]=n;
  while(i<t)
  {
    while(ml>q[i].l)
    {
      ml--;
      ct[f[a[ml]]]--;
      f[a[ml]]++;
      ct[f[a[ml]]]++;
      ans=max(ans,f[a[ml]]);
    }
    while(ml<q[i].l)
    {
      ct[f[a[ml]]]--;
      f[a[ml]]--;
      ct[f[a[ml]]]++;
      while(ct[ans]==0)
        ans--;
      ml++;
    }
    while(mr<q[i].r)
    {
      mr++;
      ct[f[a[mr]]]--;
      f[a[mr]]++;
      ct[f[a[mr]]]++;
      ans=max(ans,f[a[mr]]);
    }
    while(mr>q[i].r)
    {
       ct[f[a[mr]]]--;
      f[a[mr]]--;
      ct[f[a[mr]]]++;
      while(ct[ans]==0)
        ans--;
      mr--;
    }
    l=q[i].r-q[i].l+1;
    x=ans;
    if(2*x>l)
      fin[q[i].ind]=2*x-l;
    else
      fin[q[i].ind]=1;
    i++;
  }
  i=0;
  while(i<t)
  {
    deb(fin[i])
    i++;
  }
}