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
ll a[50];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,o,e,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=o=e=0;
    while(i<n)
    {
      cin>>a[i];
      if(i%2!=a[i]%2)
        {
          if(i%2)
            o++;
          else
            e++;
        }
        i++;
    }
    if(o==e)
      deb(o)
    else
      deb(-1)
  }
}