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
  ll n;
  cin>>n;
  ll i=0,ans=0,d,x=0;
  map<ll,ll> m,M;
  m[0]=1;
  while(i<n)
  {
    cin>>d;
    x^=d;
    //deB(i,x)
    if(i%2)
      ans+=m[x];
    else
      ans+=M[x];
    if(i%2)
      m[x]++;
    else
      M[x]++;
    i++;
  }
  deb(ans)
}