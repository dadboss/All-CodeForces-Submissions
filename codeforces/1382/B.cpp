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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,q,f,x;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<n)
      cin>>a[i++];
    i=0;
    f=0;
    while(i<n&&a[i]==1)
    {
      f=1-f;
      i++;
    }
    if(i==n)
    {
      if(f==0)
          deb("Second")
        else
          deb("First")
      continue;
    }
    if(f)
      deb("Second")
    else
      deb("First")
  }
}