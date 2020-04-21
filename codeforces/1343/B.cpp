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
  ll t,n,i,sum,k;
  cin>>t;
  while(t--)
  {
    cin>>n;
    if(n%4)
      NO
    else
    {
      YES
      i=0;
      k=2;
      sum=0;
      while(i<n/2)
      {
        cout<<k<<" ";
        sum+=k;
        k+=2;
        i++;
      }
      k=1;
      i=0;
      while(i<n/2-1)
      {
        cout<<k<<" ";
        sum-=k;
        i++;
        k+=2;
      }
      deb(sum);
    }
  }
}