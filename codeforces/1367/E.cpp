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
  ll t,n,k,x,p,ans;
  cin>>t;
  string s;
  while(t--)
  {
    map<char,ll> f;
    cin>>n>>k>>s;
    for(auto x:s)
    {
      f[x]++;
    }
    while(1)
    {
      x=__gcd(k,n);
      p=n/x;
      ans=0;
      for(auto x:f)
      {
        ans+=x.ss/p;
      }
      if(ans>=x)
      {
        deb(n)
        break;
      }
      n--;
    }
  }
}