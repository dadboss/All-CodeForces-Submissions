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
ll a[509];
ll dp[509][509];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,b,p;
  cin>>n>>m>>b>>p;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  ll k,j;
  dp[0][0]=1;
  while(i<n)
  {
    j=1;
    while(j<=m)
    {
      k=0;
      while(k<=b)
      {
        if(k-a[i]>-1)
        {
          dp[j][k]+=dp[j-1][k-a[i]];
          dp[j][k]%=p;
        }
        k++;
      }
      j++;
    }
    i++;
  }
  ll sum=0;
  i=0;
  while(i<=b)
  {
    sum+=dp[m][i];
    sum%=p;
    i++;
  }
  deb(sum)
}