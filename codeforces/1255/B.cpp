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
  ll t,n,i,d,ans,m;
  cin>>t;
  while(t--)
  {
    ans=0;
    cin>>n>>m;
    i=0;
    while(i<n)
    {
      cin>>d;
      ans+=d;
      i++;
    }
    if(n!=m||n==2)
      deb(-1)
    else
    {
      deb(2*ans);
      i=1;
      while(i<n)
      {
        deB(i,i+1);
        i++;
      }
      deB(n,1);
    }
  }
}