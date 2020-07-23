#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
#define blk 1000
struct qu
{
  ll l,r,ind;
};
qu q[100009];
bool cmp(qu a,qu b)
{
  if(a.l/blk!=b.l/blk)
    return a.l/blk<b.l/blk;
  return a.r>b.r;
}
ll a[100009],f[100009],fin[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  while(i<m)
  {
    cin>>q[i].l>>q[i].r;
    q[i].l--;
    q[i].r--;
    q[i].ind=i;
    i++;
  }
  sort(q,q+m,cmp);
  i=0;
  ll ans=0,ml=0,mr=-1;
  while(i<m)
  {
    while(ml>q[i].l)
    {
      ml--;
      if(a[ml]<=100000)
      {
        f[a[ml]]++;
        if(f[a[ml]]==a[ml])
          ans++;
        if(f[a[ml]]==a[ml]+1)
          ans--;
      }
    }
    while(ml<q[i].l)
    {
      if(a[ml]<=100000)
      {
        f[a[ml]]--;
        if(f[a[ml]]+1==a[ml])
          ans--;
        if(f[a[ml]]==a[ml])
          ans++;
      }
      ml++;
    }
    while(mr<q[i].r)
    {
      mr++;
      if(a[mr]<=100000)
      {
        f[a[mr]]++;
        if(f[a[mr]]==a[mr])
          ans++;
        if(f[a[mr]]==a[mr]+1)
          ans--;
      }
    }
    while(mr>q[i].r)
    {
      if(a[mr]<=100000)
      {
        f[a[mr]]--;
        if(f[a[mr]]+1==a[mr])
          ans--;
        if(f[a[mr]]==a[mr])
          ans++;
      }
      mr--;
    }
    fin[q[i].ind]=ans;
    i++;
  }
  i=0;
  while(i<m)
  {
    deb(fin[i]);
    i++;
  }
}
