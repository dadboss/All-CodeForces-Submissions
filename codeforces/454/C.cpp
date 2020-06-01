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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll m,n;
  cin>>m>>n;
  ll i=1;
  double ans=0;
  while(i<=m)
  {
    ans+=i*pow(i*1.0/(m*1.0),n);
    //deb(ans)
    ans-=i*pow((i-1.0)/(m*1.0),n);
    //deB(ans,i)
    i++;
  }
  cout<<fixed<<setprecision(10)<<ans;
}