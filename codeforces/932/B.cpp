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
ll a[10][1000009];
ll f(ll n)
{
  if(n<10)
    return n;
  ll sum=1;
  while(n)
  {
    if(n%10)
      sum*=n%10;
    n/=10;
  }
  return f(sum);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll i=1,k,q,l,r;
  while(i<=1000000)
  {
    k=1;
    while(k<10)
    {
      a[k][i]=a[k][i-1];
      k++;
    }
    a[f(i)][i]++;
    i++;
  }
  cin>>q;
  while(q--)
  {
    cin>>l>>r>>k;
    deb(a[k][r]-a[k][l-1]);
  }
}