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
  ll n;
  cin>>n;
  string s="codeforces";
  ll i=0;
  ll a[15];
  while(i<12)
  {
    a[i]=1;
    i++;
  }
  ll ans=1;
  i=9;
  while(ans<n)
  {
    if(i==-1)
      i=9;
    ans/=a[i];
    a[i]++;
    ans*=a[i];
    i--;
  }
  i=0;
  ll j;
  while(i<10)
  {
    j=0;
    while(j<a[i])
    {
      cout<<s[i];
      j++;
    }
    i++;
  }
}