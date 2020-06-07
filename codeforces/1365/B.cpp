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
ll ar[599];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,d,n,a,b,i;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<n)
    {
     cin>>ar[i];
      i++;
    }
    i=a=b=0;
    while(i<n)
    {
      cin>>d;
      if(d)
        a++;
      else
        b++;
      i++;
    }
    if(a==0||b==0)
      {
        i=1;
        while(i<n)
        {
          if(ar[i]<ar[i-1])
          {
            No
            break;
          }
          i++;
        }
        if(i==n)
          Yes
      }
    else
      Yes
  }
}