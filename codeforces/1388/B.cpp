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
  ll t,n,i,x,y;
  cin>>t;
  while(t--)
  {
    cin>>n;
    x=(n-1)/4;
    x++;
    y=n-x;
    i=0;
    while(i<y)
    {
      cout<<'9';
      i++;
    }
    i=0;
    while(i<x)
    {
      cout<<'8';
      i++;
    }
    cout<<"\n";
  }
}