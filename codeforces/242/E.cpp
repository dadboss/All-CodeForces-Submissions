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
#define int ll
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll seg[22][4*N],fli[22][4*N];
ll a[N];
void build(ll i,int nd,int l,int r)
{
  if (l==r) 
  {
    seg[i][nd]=(a[l]>>i&1);
    return;
  }
  int m=(l+r)/2;
  build(i,nd*2,l,m);
  build(i,nd*2+1,m+1,r);
  seg[i][nd]=seg[i][nd*2]+seg[i][nd*2+1];
}
ll qry(int f[],ll *flip,int nd,int l,int r,int x,int y)
{
  if(x>y)
    return 0;
  if (l==x && r==y) return f[nd];
  int m=(l+r)/2;
  ll u;
  u=qry(f,flip,nd*2,l,m,x,min(y,m))+qry(f,flip,nd*2+1,m+1,r,max(x,m+1),y);
  if(flip[nd])
    return y-x+1-u;
  return u;
}
void upd(int f[],ll *flip,int nd,int l,int r,int x,int y)
{
  if (l==x && r==y) 
  {
    f[nd]=r-l+1-f[nd];
    flip[nd]=1-flip[nd];
  }
  else
  {
    int m=(l+r)/2;
    if (x<=m) upd(f,flip,nd*2,l,m,x,min(y,m));
    if (m<y) upd(f,flip,nd*2+1,m+1,r,max(x,m+1),y);
    f[nd]=f[nd*2]+f[nd*2+1];
    if (flip[nd]) f[nd]=r-l+1-f[nd];
  }
}
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,x,l,r,sum;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  i=0;
  while(i<22)
  {
    build(i,1,1,n);
    i++;
  }
  ll m;
  cin>>m;
  while(m--)
  {
    cin>>x>>l>>r;
    if(x==1)
    {
      sum=0;
      i=0;
      while(i<22)
      {
        sum+=(1ll<<i)*qry(seg[i],fli[i],1,1,n,l,r);
        i++;
      }
      deb(sum)
    }
    else
    {
      cin>>x;
      i=0;
      while(i<22)
      {
        if((x>>i)&1)
          upd(seg[i],fli[i],1,1,n,l,r);
        i++;
      }
    }
  }
}