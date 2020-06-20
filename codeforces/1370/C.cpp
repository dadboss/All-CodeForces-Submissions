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
  ll t,n,i,f;
  cin>>t;
  while(t--)
  {
    f=0;
    cin>>n;
    //deb(n)
    if(n==1)
    {
      deb("FastestFinger");
      continue;
    }
    if(n==2||n%2)
    {
      deb("Ashishgup")
      continue;
    }
    i=3;
    while(i*i<=n)
    {
      if(i%2&&n%i==0&&n/i!=2)
      {
        f=1;
        deb("Ashishgup")
        break;
      }
      if(n%i==0&&(n/i)%2)
        {
        f=1;
        deb("Ashishgup")
        break;
      }
      i++;
    }
    if(f==0)
      deb("FastestFinger");
  }
}