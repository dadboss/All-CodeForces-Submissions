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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll i=1,a[n+1];
  while(i<=n)
  {
    cin>>a[i];
    i++;
  }
  sort(a+1,a+n+1);
  i=1;
  ll s[n+1],p=0;
  while(i<=m)
  {
    p+=a[i];
    cout<<p<<" ";
    s[i]=a[i];
    i++;
  }
  while(i<=n)
  {
    p+=a[i]+s[i-m];
    s[i]=a[i]+s[i-m];
    cout<<p<<" ";
    i++;
  }
}
