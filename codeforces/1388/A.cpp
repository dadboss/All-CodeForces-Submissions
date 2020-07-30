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
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    if(n==36)
    {
      YES
      cout<<"5 6 10 15\n";
      continue;
    }
    if(n==44)
    {
      YES
      cout<<"6 7 10 21\n";
      continue;
    }
    if(n==40)
    {
      YES
      cout<<"6 10 15 9\n";
      continue;
    }
    if(n>30)
    {
      YES
      cout<<"6 10 14 "<<n-30<<"\n";
    }
    else
      NO
  }
}