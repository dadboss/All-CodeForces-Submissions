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
  ll n,d,q;
  char c;
  cin>>n;
  while(n--)
  {
    cin>>d;
    a[d]++;
  }
  ll i=1;
  ll x=0,u=0,r=0,z=0;
  while(i<=100000)
  {
    if(a[i]>7)
      u++;
    else if(a[i]>5)
      z++;
    else if(a[i]>3)
      x++;
    else if(a[i]>1)
      r++;
    i++;
  }
  cin>>q;
  while(q--)
  {
    cin>>c>>d;
    if(c=='+')
    {
      a[d]++;
      if(a[d]==8)
      {
        u++;
        z--;
      }
      else if(a[d]==6)
      {
        z++;
        x--;
      }
      else if(a[d]==4)
      {
        x++;
        r--;
      }
      else if(a[d]==2)
        r++;
    }
    else
    {
      a[d]--;
      if(a[d]==7)
      {
        u--;
        z++;
      }
      else if(a[d]==5)
      {
        z--;
        x++;
      }
      else if(a[d]==3)
      {
        x--;
        r++;
      }
      else if(a[d]==1)
        r--;
    }
    //deB(r,x)
    //deB(z,u)
    if(u||(x+z)>1)
    {
      YES
      continue;
    }
    if((x+z)==1)
    {
      if(x==1)
      {
        if(r>1)
          YES
        else
          NO
      }
      else
      {
        if(r)
          YES
        else
          NO
      }
    }
    else
      NO
  }
}