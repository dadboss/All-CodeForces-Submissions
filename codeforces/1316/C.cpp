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
  ll n,m,p;
  cin>>n>>m>>p;
  ll i=0,ans=-1,d;
  while(i<n)
  {
    cin>>d;
    if(d%p&&ans==-1)
      ans=i;
    i++;
  }
  i=0;
  while(i<m)
  {
    cin>>d;
    if(d%p)
    {
      deb(ans+i)
      return 0;
    }
    i++;
  }
}