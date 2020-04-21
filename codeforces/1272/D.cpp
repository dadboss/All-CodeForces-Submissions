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
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0,a[n];
  while(i<n)
    cin>>a[i++];
  i=n-2;
  ll r[n],l[n];
  r[n-1]=1;
  ll ans=1;
  while(i>-1)
  {
    if(a[i]<a[i+1])
      r[i]=1+r[i+1];
    else
      r[i]=1;
    ans=max(ans,r[i]);
    i--;
  }
  i=1;
  l[0]=1;
  while(i<n)
  {
    if(a[i]>a[i-1])
      l[i]=1+l[i-1];
    else
      l[i]=1;
    ans=max(ans,l[i]);
    i++;
  }/*
  i=0;
  while(i<n)
    cout<<l[i++]<<" ";
  cout<<"\n";
  i=0;
  while(i<n) 
    cout<<r[i++]<<" ";
  cout<<"\n";
  */
  i=1;
  while(i<n-1)
  {
    if(a[i]<=a[i-1]||a[i]>=a[i+1])
    {
      if(a[i+1]>a[i-1])
        {
          ans=max(ans,l[i-1]+r[i+1]);
        }
    }
    i++;
  }
  deb(ans);
}