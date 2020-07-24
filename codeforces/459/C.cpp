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
ll a[1009][1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k,d,j,x;
  cin>>n>>k>>d;
  ll tot=1,i=0;
  while(i<d)
  {
    tot*=k;
    if(tot>=n)
      break;
    i++;
  }
  if(i==d)
  {
    deb(-1)
    return 0;
  }
  ll t=1;
  i=0;
  while(i<n)
  {
    j=0;
    x=t;
    while(j<d)
    {
      a[j][i]=x%k;
      x/=k;
      j++;
    }
    i++;
    t++;
  }
  i=0;
  while(i<d)
  {
    j=0;
    while(j<n)
    {
      cout<<a[i][j]+1<<" ";
      j++;
    }
    i++;
    cout<<"\n";
  }
}