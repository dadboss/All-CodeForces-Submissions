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
  ll i=1;
  vector<pair<ll,ll>> v;
  while(i<=n+1)
  {
    v.pb({i,i});
    i++;
  }
  v.pb({0,0});
  i=0;
  while(i<=n)
  {
    v.pb({i,i+1});
    v.pb({i+1,i});
    i++;
  }
  deb(v.size())
  for(auto x:v)
    deB(x.ff,x.ss);
}