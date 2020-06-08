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
ll a[599];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,i=0;
  cin>>n;
  while(i<n)
    cin>>a[i++];
  if(n==1)
  {
    deb(a[0])
    return 0;
  }
  if(n==2)
  {
    deb((a[0]|a[1]));
    return 0;
  }
  ll ans=0,j,k;
  i=0;
  while(i<n)
  {
    j=i+1;
    while(j<n)
    {
      k=j+1;
      while(k<n)
      {
        ans=max(ans,a[i]|a[j]|a[k]);
        k++;
      }
      j++;
    }
    i++;
  }
  deb(ans)
}