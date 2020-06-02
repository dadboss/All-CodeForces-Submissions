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
  ll t,n,m,ex,ans,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    ans=n*(n+1)/2;
    k=(n-m)/(m+1);
    ex=(n-m)%(m+1);
    ans-=(k+1)*(k+2)/2*ex;
    ans-=k*(k+1)/2*(m+1-ex);
    deb(ans)
  }
}