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
ll a[3509];
ll ans;
inline void f(ll x,ll l,ll r)
{
  ll i=l+x;
  while(i>=l)
  {
    ans=min(ans,max(a[i],a[r]));
    i--;
    r--;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,m,ga,k,i,l,r,x;
  cin>>t;
  while(t--)
  {
    cin>>n>>m>>k;
    i=1;
    while(i<=n)
      cin>>a[i++];
    k=min(k,m-1);
    x=m-k-1;
    l=k;
    ga=LLONG_MIN;
    while(l>-1)
    {
      ans=LLONG_MAX;
      r=n+l-k;
      f(x,l+1,r);
      ga=max(ga,ans);
      l--;
    }
    deb(ga)
  }
}