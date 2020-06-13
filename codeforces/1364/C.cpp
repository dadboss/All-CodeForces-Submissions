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
ll a[100009],b[100009];
bool f[1000001];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,j;
  cin>>n;
  ll i=1;
  while(i<=n)
    {
      cin>>a[i];
      if(a[i]>i)
      {
        deb(-1)
        return 0;
      }
      f[a[i]]=1;
      i++;
    }
  ll s=0;
  while(f[s])
    s++;
  i=1;
  while(i<=n)
  { 
    j=i+1;
    while(j<=n&&a[j]==a[j-1])
      j++;
    b[j]=a[i];
    if(i!=1)
    i++;
    while(i<j)
    {
      b[i]=s;
      i++;
      s++;
      while(f[s])
        s++;
    }
    i=j;
  }
  i=1;
  while(i<=n)
    cout<<b[i++]<<" ";
}