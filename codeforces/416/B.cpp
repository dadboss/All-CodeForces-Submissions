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
ll a[50009][10];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll m,n,j;
  cin>>m>>n;
  ll i=1;
  while(i<=m)
  {
    j=1;
    while(j<=n)
    {
      cin>>a[i][j];
      j++;
    }
    i++;
  }
  i=2;
  while(i<=n)
  {
    a[1][i]+=a[1][i-1];
    i++;
  }
  i=1;
  while(i<=n)
  {
    j=2;
    while(j<=m)
    {
      if(i-1)
      {
        //a[j-1][i]=max(a[j-1][i],a[j][i-1]);
        a[j][i]+=max(a[j-1][i],a[j][i-1]);
      }
      else
      {
        a[j][i]+=a[j-1][i];
      }
      j++;
    }
    i++;
  }
  i=1;
  while(i<=m)
  {
    cout<<a[i][n]<<" ";
    i++;
  }
}