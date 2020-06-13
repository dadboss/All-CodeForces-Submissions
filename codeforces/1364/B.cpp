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
  ll t,n,d,i,j;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<n)
      cin>>a[i++];
    vector<ll> v;
    v.pb(a[0]);
    i=1;
    while(i<n)
    {
      if(a[i]<a[i-1])
      {
        j=i+1;
        while(j<n&&a[j]<a[j-1])
          j++;
        v.pb(a[j-1]);
      }
      else
      {
        j=i+1;
        while(j<n&&a[j]>a[j-1])
          j++;
        v.pb(a[j-1]);
      }
      i=j;
    }
    deb(v.size())
    for(auto x:v)
      cout<<x<<" ";
    cout<<"\n";
  }
}