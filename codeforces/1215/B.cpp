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
  ll n,i=0,d;
  cin>>n;
  ll p=0,s=1;
  while(i<n)
  {
    cin>>d;
    if(d<0)
      s*=-1;
    if(s==1)
      p++;
    i++;
  }
  ll e=n-p;
  deB(n*(n+1)/2-(p*(p+1)/2+e*(e-1)/2),p*(p+1)/2+e*(e-1)/2);
}