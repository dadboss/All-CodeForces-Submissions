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
  ll n,i,j;
  cin>>n;
  vector<ll> v;
  if(n%4==1)
  {
    deb(1)
    i=1;
    while(i<=n/4+1)
    {
      v.pb(i);
      i++;
    }
    i=n/4;
    while(i)
    {
      v.pb(n);
      n--;
      i--;
    }
  }
  else if(n%4==2)
  {
    deb(1);
    i=1;
    j=n;
    while(j-i!=1)
    {
     v.pb(i);
     v.pb(j);
      i+=2;
      j-=2;
    }
    v.pb(i);
  }
  else if(n%4==3)
  {
    i=1;
    deb(0)
    while(i<=n/4)
    {
      v.pb(i);
      i++;
    }
    i=n/4+1;
    while(i)
    {
      v.pb(n);
      n--;
      i--;
    }
  }
  else
  {
    i=1;
    deb(0)
    while(i<=n)
    {
      v.pb(i);
      i+=4;
    }
    i=4;
    while(i<=n)
    {
      v.pb(i);
      i+=4;
    }
  }
  cout<<v.size()<<" ";
  for(auto x:v)
    cout<<x<<" ";
}