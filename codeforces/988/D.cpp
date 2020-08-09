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
  ll n,x=LLONG_MAX,y,k,j;
  ll i=0;
  cin>>n;
  map<ll,bool> m;
  while(i<n)
  {
    cin>>a[i];
    m[a[i]]=1;
    i++;
  }
  ll ans;
  i=0;
  while(i<n)
  {
    j=1;
    while((a[i]-j>-1e10)||(a[i]+j<1e10))
    {
      k=0;
      if(m.find(a[i]+j)!=m.end())
        k++;
      if(m.find(a[i]-j)!=m.end())
        k++;
      if(k==2)
      {
        deb(3)
        Deb(a[i]-j,a[i],a[i]+j);
        return 0;
      }
      if(k)
      {
        if(m.find(a[i]+j)!=m.end())
        {
          x=a[i];
          y=a[i]+j;
        }
        else
        {
          x=a[i];
          y=a[i]-j;
        }
      }
      j*=2;
    }
    i++;
  }
  if(x!=LLONG_MAX)
  {
    deb(2)
    deB(x,y);
    return 0;
  }
  deb(1)
  deb(a[0])
}