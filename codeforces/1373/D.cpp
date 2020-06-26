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
  ll t,i,sum,c,n,mx;
  cin>>t;
  while(t--)
  {
    mx=0;
    sum=0;
    cin>>n;
    ll i=0;
    while(i<n)
      {
        cin>>a[i];
        if(i%2==0)
          sum+=a[i];
        i++;
      }
    i=1;
    c=0;
    while(i<n)
    {
      if(c+a[i]-a[i-1]>0)
        c+=a[i]-a[i-1];
      else
        c=0;
      mx=max(c,mx);
      i+=2;
    }
    i=2;
    c=0;
    while(i<n)
    {
      if(c+a[i-1]-a[i]>0)
        c+=a[i-1]-a[i];
      else
        c=0;
      mx=max(mx,c);
      i+=2;
    }
    deb(sum+mx)
  }
}