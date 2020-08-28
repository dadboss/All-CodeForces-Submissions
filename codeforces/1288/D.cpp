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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll a[300009][9],k,i,n,m,ct,t;
pi f(ll x)
{
  k=0;
  ll q[600]={};
  vi b;
  while(k<n)
  {
    i=m-1;
    ct=0;
    t=1;
    while(i>-1)
    {
      if(a[k][i]>=x)
        ct+=t;
      t*=2;
      i--;
    }
    if(q[ct]==0)
    {
      q[ct]=k+1;
      b.pb(ct);
    }
    k++;
  }
  t--;
  i=0;
  while(i<b.size())
  {
    k=i;
    while(k<b.size())
    {
      if((b[i]|b[k])==t)
        {
          //deB(b[i],b[k])
          return {q[b[i]],q[b[k]]};
        }
      k++;
    }
    i++;
  }
  return {-1,-1};
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  ///freopen("input.txt", "r", stdin);
  ///freopen("output.txt", "w", stdout);
  ll i=0,j;
  cin>>n>>m;
  while(i<n)
  {
    j=0;
    while(j<m)
    {
      cin>>a[i][j];
      j++;
    }
    i++;
  }
  pi w;
  ll s=0,e=1e10,mid,ans,an;
  while(s<=e)
  {
    mid=(s+e)/2;
    //deb(mid)
    w=f(mid);
    if(w.ff!=-1)
    {
      ans=w.ff;
      an=w.ss;
      s=mid+1;
    }
    else
      e=mid-1;
  }
  deB(ans,an)
}