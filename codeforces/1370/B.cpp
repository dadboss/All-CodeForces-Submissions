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
  ll t,n,d,i,k;
  cin>>t;
  while(t--)
  {
    //YES
    cin>>n;
    i=1;
    vector<ll> o,e;
    while(i<=2*n)
      {
        cin>>d;
        if(d%2)
          o.pb(i);
        else
          e.pb(i);
        i++;
      }
      k=0;
      i=1;
      while(i<e.size())
      {
        deB(e[i],e[i-1]);
        k++;
        if(k==n-1)
          break;
        i+=2;
      }
      if(k==n-1)
        continue;
      i=1;
      while(i<o.size())
      {
        deB(o[i],o[i-1]);
        i+=2;
        k++;
        if(k==n-1)
          break;
      }
  }
}