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
  ll o=0,z=0;
  for(auto x:s)
    if(x=='1')
      o++;
    else if(x=='0')
      z++;
    ll n=s.size();
  ll pehla=(n-2+1)/2;
  ll doosra=n-2-pehla;
  set<string> ans;
  if(pehla>=o)
    ans.insert("00");
  if(doosra>=z)
    ans.insert("11");
  if(o-pehla<=1&&z-doosra<=1)
  {
    if(s.back()=='1'||(s.back()=='?'&&o<=pehla))
      ans.insert("01");
    if(s.back()=='0'||(s.back()=='?'&&z<=doosra))
      ans.insert("10");
  }
  for(auto x:ans)
    deb(x)
}         