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
ll a[1009],f[1009];
vector<pair<ll,ll>> v;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  a[0]=3000;
  ll n,m,d,l,r,i;
  cin>>n>>m;
  while(m--)
  {
    cin>>d>>l>>r;
    if(d)
    {
      while(l<r)
      {
        a[l]=1;
        l++;
      }
    }
    else
      v.pb({l,r});
  }
  i=1;
  f[1]=3000;
  while(i<n)
  {
    if(a[i])
      f[i+1]=f[i];
    else
      f[i+1]=f[i]-1;
    i++;
  }
  for(auto x:v)
  {
    i=x.ff+1;
    while(i<=x.ss)
    {
      if(f[i]<f[i-1])
        break;
      i++;
    }
    if(i==x.ss+1)
    {
      NO
      return 0;
    }
  }
  YES
  i=1;
  while(i<=n)
    cout<<f[i++]<<" ";

}