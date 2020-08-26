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
ll n;
ll a[5000];
ll f(ll i,ll e,ll c)
{
  if(i>e)
    return 0;
  ll mn=LLONG_MAX;
  ll j=i;
  while(j<=e)
  {
    mn=min(mn,a[j]);
    j++;
  }
  j=i;
  while(j<=e)
  {
    if(a[j]==mn)
      return min(e-i+1,f(i,j-1,mn)+f(j+1,e,mn)+mn-c);
    j++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  deb(f(0,n-1,0))
}