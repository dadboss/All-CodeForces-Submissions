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
  ll n,m,x,y,i,j;
  cin>>n>>m>>x>>y;
  deB(x,y);
  i=y-1;
  while(i)
  {
    deB(x,i);
    i--;
  }
  i=y+1;
  while(i<=m)
  {
    deB(x,i)
    i++;
  }
  i=x-1;
  ll f=0;
  while(i)
  {
    if(f)
      j=1;
    else
      j=m;
    while(j&&j<=m)
    {
      deB(i,j);
      if(f)
        j++;
      else
        j--;
    }
    f=1-f;
    i--;
  }
  i=x+1;
  while(i<=n)
  {
    if(f)
      j=1;
    else
      j=m;
    while(j&&j<=m)
    {
      deB(i,j)
      if(f)
        j++;
      else
        j--;
    }
    f=1-f;
    i++;
  }
}