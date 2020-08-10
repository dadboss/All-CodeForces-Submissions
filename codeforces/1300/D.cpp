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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,j;
  cin>>n;
  if(n%2)
  {
    NO
    return 0;
  }
  ll i=0;
  while(i<n)
  {
    cin>>a[i]>>b[i];
    i++;
  }
  i=0;
  j=n/2;
  while(i<n/2)
    {
       if(a[i+1]-a[i]!=-a[(j+1)%n]+a[j]||b[i+1]-b[i]!=-b[(j+1)%n]+b[j%n])
       {
        NO
        break;
       }
       i++;
       j++;
    } 
    if(i==n/2)
      YES
}