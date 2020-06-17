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
#define P 1000000007 
ll power(ll x, ll y ) 
{ 
    ll res = 1;
    x = x % P; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % P; 
        y = y>>1;  
        x = (x*x) % P; 
    } 
    return res; 
} 
ll a[1000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,sum,ct,x,n,p;
  cin>>t;
  while(t--)
  {
    cin>>n>>p;
    i=0;
    while(i<n)
      cin>>a[i++];
    if(p==1)
      {
        deb(n%2)
        continue;
      }
    sort(a,a+n);
    i=n-1;
    ct=0;
    while(i>-1)
    {
      //deb(i)
      if(ct)
      {
        if(a[i+1]-a[i]>=log(n)*1.0/log(p))
          break;
        ct*=pow(p,(a[i+1]-a[i]));
        ct--;
      }
      else
      {
        ct=1;
        x=i;
      }
      //Deb(ct,x,a[i]);
      i--;
    }
    //deb(ct)
    i=0;
    sum=0;
    while(i<x)
    {
      sum+=power(p,a[i]);
      sum%=P;
      i++;
    }
    deb((P+power(p,a[x])-sum)%P);
  }
}