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
ll a[100009];
vector<ll> v;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,d,m,j,ct,k;
  cin>>n>>d>>m;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  sort(a+1,a+n+1);  
  ll sum=a[n];
  i=n-1;
  ll p=n-1;
  while(i&&p)
  {
    if(a[i]>m&&p>d)
    {
      sum+=a[i];
      //deb(a[i])
      v.pb(a[i]);
      p-=d;
      p--;
    }
    else if(a[i]<=m)
    {
      sum+=a[i];
      //deb(a[i])
      p--;
    }
    i--;
  }
  while(i&&a[i]>m)
    i--;
  if(i==0)
  {
    deb(sum)
    return 0;
  }
  while(i&&p)
  {
    sum+=a[i];
    p--;
    i--;
  }
  if(i==0)
    {
      deb(sum)
      return 0;
    }
  j=0;
  reverse(all(v));
  while(j<v.size())
  {
    k=0;
    ct=0;
    while(i&&k<d+1)
    {
      ct+=a[i];
      i--;
      k++;
    }
    //deB(ct,v[j])
    if(ct>v[j])
    {
      sum-=v[j];
      sum+=ct;
      j++;
    }
    else
      break;
  }
  deb(sum)
}