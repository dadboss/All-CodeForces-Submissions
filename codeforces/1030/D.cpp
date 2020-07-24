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
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,k;
  cin>>n>>m>>k;
  if(2*n*m%k)
  {
    NO
    return 0;
  }
  if(k==2)
  {
    YES
    deB(0,0)
    deB(n,0)
    deB(0,m)
    return 0;
  }
  ll x=2*n*m/k;
  ll i=sqrt(x);
  //i=0;
  while(i&&((i<=m&&x/i<=n)||(i<=n||x/i<=m)))
  {
    if(x%i==0)
    {
      if(i<=n&&x/i<=m)
      {
        YES
        deB(0,0)
        deB(0,x/i)
        deB(i,0)
        return 0;
      }
      if(i<=m&&x/i<=n)
      {
        YES
        deB(0,0)
        deB(0,i)
        deB(x/i,0)
        return 0;
      }
    }
    i--;
  }
  NO
}