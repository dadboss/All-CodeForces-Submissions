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
  ll a,b,temp,x;
  cin>>a>>b;
  if(a>b)
    swap(a,b);
  temp=a;
  if(b%a==0)
  {
    deb(0)
    return 0;
  }
  ll i=1,d=b-a,ans=LLONG_MAX,k;
  while(i*i<=d)
  {
    if(d%i==0)
    {
      x=a%i;
      if(x)
      x=i-x;
      if((a+x)*(b+x)/i<ans||((a+x)*(b+x)/i==ans&&x<k))
      {
        ans=(a+x)*(b+x)/i;
        k=x;
      }
      a=temp;
      x=a%(d/i);
      if(x)
      x=d/i-x;
      if((a+x)*(b+x)/(d/i)<ans||((a+x)*(b+x)/(d/i)==ans&&x<k))
      {
        ans=(a+x)*(b+x)/(d/i);
        k=x;
      }
      a=temp;
      //Deb(i,ans,k);
    }
    i++;
  }
  deb(k)
}