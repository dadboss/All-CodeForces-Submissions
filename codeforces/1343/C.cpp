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
ll a[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,j,sum,mx;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<n)
      cin>>a[i++];
    i=sum=0;
    while(i<n)
    {
      j=i+1;
      mx=a[i];
      while(j<n&&a[j]*a[i]>0)
      {
        mx=max(mx,a[j]);
        j++;
      }
      sum+=mx;
      i=j;
    }
    deb(sum);
  }
}