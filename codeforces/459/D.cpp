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
ll a[1000009],f[1000009],b[1000009],n;
inline ll qry(ll x)
{
  ll sum=0;
  while(x)
  {
    sum+=f[x];
    x-=x&-x;
  }
  return sum;
}
inline void upd(ll x)
{
  while(x<=n)
  {
    f[x]++;
    x+=x&-x;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  map<ll,ll> m,x;
  i=1;
  while(i<=n)
  {
    m[a[i]]++;
    b[i]=m[a[i]];
    i++;
  }
  i=n;
  ll ans=0;
  while(i)
  {
    ans+=qry(b[i]-1);
    x[a[i]]++;
    upd(x[a[i]]);
    i--;
  }
  deb(ans)
}