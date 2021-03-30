#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
pi a[N];
int main()
{
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i].ff;
    a[i].ss=i;
    i++;
  }
  sort(a+1,a+1+n);
  i=1;
  ll j;
  vector<pair<ll,pi>> v;
  while(i<=n)
  {
    j=i+1;
    while(j<=n)
    {
      v.pb({a[j].ff-a[i].ff,{a[i].ss,a[j].ss}});
      j++;
    }
    i++;
  }
  sort(all(v));
  i=v.size()-1;
  string s;
  while(i>-1)
  {
    Deb('?',v[i].ss.ss,v[i].ss.ff)
    cin>>s;
    if(s[0]=='Y')
    {
      Deb('!',v[i].ss.ss,v[i].ss.ff)
      return 0;
    }
    i--;
  }
  Deb('!',0,0)
}