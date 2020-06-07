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
ll a[40009],b[40009],ab[40009],bb[40009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,k;
  cin>>n>>m>>k;
  ll i=0,j,len;
  while(i<n)
    cin>>a[i++];
  i=0;
  while(i<m)
    cin>>b[i++];
  i=0;
  while(i<n)
  {
    while(i<n&&a[i]==0)
      i++;
    len=0;
    while(i<n&&a[i])
    {
      i++;
      len++;
    }
    j=1;
    while(j<=len)
    {
      ab[j]+=len-j+1;
      j++;
    }
  }
  i=0;
  while(i<m)
  {
    while(i<m&&b[i]==0)
      i++;
    len=0;
    while(i<m&&b[i])
    {
      i++;
      len++;
    }
    j=1;
    while(j<=len)
    {
      bb[j]+=len-j+1;
      j++;
    }
  }
  i=1;
  ab[0]=bb[0]=0;
  ll ans=0;
  while(i<=40000)
  {
    if(k%i==0&&k/i<=m)
      ans+=ab[i]*bb[k/i];
    i++;
  }
  deb(ans)
}