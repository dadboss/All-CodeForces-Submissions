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
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,d,temp,j;
  ll a[24]={};
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>d;
    j=0;
    temp=d;
    while(temp)
    {
      if(temp&1)
        a[j]++;
      j++;
      temp>>=1;
    }
    i++;
  }
  i=0;
  ll ans=0;
  while(1)
  {
    d=0;
    temp=1;
    j=0;
    while(j<23)
    {
      if(a[j])
      {
        a[j]--;
        d+=temp;
      }
      j++;
      temp<<=1;
    }
    if(d==0)
      break;
    ans+=d*d;
  }
  deb(ans)
}