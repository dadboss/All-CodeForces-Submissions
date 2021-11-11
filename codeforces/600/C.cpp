#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  string s;
  cin>>s;
  ll n=s.size();
  map<char,ll> m;
  for(auto x:s)
    m[x]++;
  map<char,ll> nm;
  vector<char> od;
  for(auto x:m)
  {
    if(x.ss%2)
      od.pb(x.ff);
    nm[x.ff]=x.ss/2;
  }
  sort(all(od));
  ll i=0,j=(ll)od.size()-1;
  while(i<j)
  {
    nm[od[i]]++;
    i++;
    j--;
  }
  char ch='!';
  if(i==j)
    ch=od[i];
  string ans;
  for(auto &x:nm)
  {
    while(x.ss--)
      ans+=x.ff;
  }
  cout<<ans;
  if(ch!='!')
    cout<<ch;
  reverse(all(ans));
  deb(ans)
}         