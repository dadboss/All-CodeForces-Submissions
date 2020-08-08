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
  ll n,x=0,y=-1;
  cin>>n;
  map<ll,ll> m;
  ll i=0;
  while(i<n)
    {
      cin>>a[i];
      m[a[i]]++;
      x+=m[a[i]]-1;
      if(a[i]&&m[a[i]]==2)
        y=a[i];
      i++;
    }
   if(x>1||m[0]>=2)
   {
    deb("cslnb")
    return 0;
   }
   if(y!=-1&&m[y-1])
    {
      deb("cslnb")
      return 0;
    }
    sort(a,a+n);
    i=0;
    x=0;
    while(i<n)
    {
      x+=a[i]-i;
      i++;
    }
    if(x%2)
      deb("sjfnb")
    else
      deb("cslnb")

}