#include<bits/stdc++.h>
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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s,x;
ll n,k;
bool f(ll i)
{
  if(i==k&&s>=x)
    return 1;
  if(i==k)
    return 0;
  ll j;
  while(1){
    j=i+k;
  while(j<n)
  {
    s[j]=s[i];
    j+=k;
  }
  if(f(i+1))
    return 1;
  if(s[i]=='9')
    {
      s[i]='0';
      return 0;
    }
  s[i]++;
}
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>n>>k>>s;
  x=s;
  if(f(0))
  {
    deb(n)
    deb(s)
    return 0;
  }
  deb(n+1)
  ll i=0;
  while(i<n+1)
  {
    if(i%k==0)
      cout<<1;
    else
      cout<<0;
    i++;
  }
}