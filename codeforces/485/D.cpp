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
ll a[200009],f[2000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  sort(a,a+n);
  i=a[0];
  ll j=-1;
  while(i<=2000000)
  {
    if(i==a[j+1])
      j++;
    while(a[j]==a[j+1])
      j++;
    f[i]=a[j];
    i++;
  }
  i=0;
  ll ans=0;
  while(i<n)
  {
    if(i==0||a[i]!=a[i-1]){
    j=a[i]*2-1;
    while(j<=2000000){
    if(f[j]>=a[i])
      ans=max(ans,f[j]%a[i]);
    j+=a[i];
  }
}
  i++;
  }
  deb(ans)
}