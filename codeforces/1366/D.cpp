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
int a[10000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll i=2,j;
  while(i<=10000000)
  {
    if(a[i]==0)
    {
      j=i;
      while(j<=10000000)
      {
        a[j]=i;
        j+=i;
      }
    }
    i++;
  }
  ll n,t,x,f,d,sum;
  cin>>n;
  vector<ll> v,b;
  vector<ll> c;
  while(n--)
  {
    cin>>d;
    t=d;
    x=a[d];
    sum=1;
    while(d%x==0)
       {
        d/=x;
        sum*=x;
      }
     if(sum>1&&t/sum>1)
     {
      v.pb(sum);
      b.pb(t/sum);
     }
     else
     {
      v.pb(-1);
      b.pb(-1);
     }
  }
  for(auto x:v)
    cout<<x<<" ";
  cout<<"\n";
  for(auto x:b)
    cout<<x<<" ";
}