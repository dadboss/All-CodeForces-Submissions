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
ll a[5000001];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll j,ct,temp,i=2;
  while(i<=5000000)
  {
    if(a[i]==0)
    {
      a[i]=1;
      j=2*i;
      while(j<=5000000)
      {
          ct=0;
          temp=j;
          while(temp%i==0)
          {
              temp/=i;
              ct++;
          }
          a[j]+=ct;
          j+=i;
      }
    }
    a[i]+=a[i-1];
    i++;
  }
  ll t,l,r;
  cin>>t;
  while(t--)
  {
    cin>>l>>r;
    deb(a[l]-a[r]);
  }
}
