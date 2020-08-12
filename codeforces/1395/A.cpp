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
  ll t,a,b,c,d,ct;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c>>d;
    ct=0;
    if(a%2)
      ct++;
    if(b%2)
      ct++;
    if(c%2)
      ct++;
    if(d%2)
      ct++;
    if(ct<2)
    {
      Yes
      continue;
    }
    if(ct==2)
    {
      No
      continue;
    }
      if(min({a,b,c})>0)
      {
        Yes
      }
      else
        No
      continue;
  }
}