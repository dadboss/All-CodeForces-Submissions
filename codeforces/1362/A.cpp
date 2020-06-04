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
  ll t,a,b,k;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    if(a==b)
    {
      deb(0)
      continue;
    }
    else if(a>b)
    {
      k=0;
      while(a!=b)
      {
        k++;
        if(a%8==0&&a/8>=b)
          a/=8;
        else if(a%4==0&&a/4>=b)
          a/=4;
        else if(a%2==0&&a/2>=b)
          a/=2;
        else
          break;
      }
      if(a==b)
        deb(k)
      else
        deb(-1);
    }
    else
    {
      k=0;
      while(a!=b)
      {
        k++;
        if(a*8<=b)
          a*=8;
        else if(a*4<=b)
          a*=4;
        else if(a*2<=b)
          a*=2;
        else
          break;
      }
      if(a==b)
        deb(k)
      else
        deb(-1)
    }
  }
}