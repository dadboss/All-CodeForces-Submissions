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
  ll t,i,e,o,n,x,d;
  cin>>t;
  while(t--)
  {
      cin>>n>>x;
      
      o=e=0;
      while(n--)
      {
        cin>>d;
        if(d%2)
          o++;
        else
          e++;
      }
      ll f=1;
      i=1;
      while(i<=min(o,x))
      {
        if(e>=x-i)
        {
          YES
          f=0;
          break;
        }
        i+=2;
      }
      if(f)
        NO
  }
}