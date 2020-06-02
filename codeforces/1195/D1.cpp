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
#define p 998244353 
ll a[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,sum;
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  ll ans=0;
  ll m=11;
  while(a[0])
  {
    i=0;
    sum=0;
    while(i<n)
    {
      sum+=n*(a[i]%10);
      sum%=p;
      a[i]/=10;
      i++;
    }
    ans+=sum*m;
    ans%=p;
    m*=100;
    m%=p;
  }
  deb(ans)
}