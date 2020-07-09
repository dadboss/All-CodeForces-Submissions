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
pair<ll,ll> a[1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,d;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>d;
    a[i]={d,i};
    i++;
  }
  sort(a+1,a+n+1);
  vector<ll> v;
  ll j=1;
  while(j<=n)
  {
    i=2;
    while(i<=n)
    {
      if(a[i].ss<a[i-1].ss)
      {
        v.pb(a[i].ss);
        v.pb(a[i-1].ss);
        swap(a[i].ss,a[i-1].ss);
      }
      i++;
    }
    j++;
  }
  deb(v.size()/2)
  i=1;
  while(i<v.size())
  {
    deB(v[i-1],v[i]);
    i+=2;
  }
}