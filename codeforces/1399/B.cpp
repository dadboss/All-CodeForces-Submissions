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
ll a[59],b[59];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,mx,ans,x,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    mx=LLONG_MAX;
    i=0;
    while(i<n)
    {
      cin>>a[i];
      mx=min(mx,a[i]);
      i++;
    }
    i=0;
    while(i<n)
    {
      a[i]-=mx;
      i++;
    }
    i=0;
    mx=LLONG_MAX;
    while(i<n)
    {
      cin>>b[i];
      mx=min(mx,b[i]);
      i++;
    }
    ans=0;
    i=0;
    while(i<n)
    {
      x=min(a[i],b[i]-mx);
      ans+=x;
      ans+=max(a[i],b[i]-mx)-x;
      i++;
    }
    deb(ans)
  }
}