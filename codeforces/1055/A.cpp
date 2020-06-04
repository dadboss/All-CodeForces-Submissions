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
ll a[1009],b[1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,s;
  cin>>n>>s;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i];
    if(i==1&&a[i]==0)
    {
      NO
      return 0;
    }
    if(a[i]&&i==s)
    {
      YES
      return 0;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    cin>>b[i];
    if(i==s&&b[i]==0)
    {
      NO
      return 0;
    }
    i++;
  }
  i=s+1;
  while(i<=n)
  {
    if(a[i]==1&&b[i]==1)
    {
      YES
      return 0;
    }
    i++;
  }
  NO
}