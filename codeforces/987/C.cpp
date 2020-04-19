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
  ll n,i=0,j,ans=LLONG_MAX;
  cin>>n;
  ll a[n],c[n];
  i=0;
  while(i<n)
  {
    cin>>a[i];
    i++;
  }
  i=0;
  while(i<n)
    cin>>c[i++];
  unordered_map<ll,ll> m;
  i=1;
  while(i<n)
  {
    j=i-1;
    while(j>-1)
    {
      if(a[i]>a[j])
      {
        if(m.find(j)!=m.end())
        {
          ans=min(ans,c[i]+m[j]);
        }
        if(m.find(i)==m.end())
          m[i]=c[i]+c[j];
        else
          m[i]=min(m[i],c[j]+c[i]);
      }
      j--;
    }
    i++;
  }
  if(ans==LLONG_MAX)
    deb(-1)
  else
    deb(ans);
}