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
ll a[100009];
bool f[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
    {
      cin>>a[i];
      i++;
    }
  i=60;
  ll x,j,ct;
  while(i>-1)
  {
    j=0;
    ct=0;
    while(j<n)
    {
      if((a[j]>>i)&1)
        {
          ct++;
          x=j;
        }
      j++;
    }
    if(ct==1)
    {
      cout<<a[x]<<" ";
      f[x]=1;
      goto qwe;
    }
    i--;
  }
  qwe:
  i=0;
  while(i<n)
  {
    if(f[i]==0)
      cout<<a[i]<<" ";
    i++;
  }
}