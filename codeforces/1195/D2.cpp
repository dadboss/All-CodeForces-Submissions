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
#define p 998244353 
ll pw[20];
ll a[100009], d[30];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0,ans=0,j,k,x,y,q;
  while(i<n)
  {
    cin>>a[i];
    d[(ll)(1+log10(a[i]))]++;
    i++;
  }
  pw[0]=1;
  pw[1]=10;
  i=2;
  while(i<30)
  {
    pw[i]=10*pw[i-1];
    pw[i]%=p;
    i++;
  }
  i=0;
  while(i<n)
  {
    j=1;
    while(a[i])
    {
      k=a[i]%10;
      q=1;
      while(q<=12)
      {
        if(q<j)
        {
          x=q+j-1;
          x=pw[x];
          ans+=2*k*x*d[q];
          ans%=p;
        }
        else
        {
          x=2*j;
          x--;
          y=x-1;
          x=pw[x];
          ans+=k*x*d[q];
          //deb(ans)
          ans%=p;
          x=y;
          x=pw[x];
          ans+=k*x*d[q];
          ans%=p;
          //deb(ans)
        }
        //Deb(j,q,ans);
        q++;
      }
      //deB(k,ans)
      j++;
      a[i]/=10;
    }
    i++;
  }
  deb(ans)
}