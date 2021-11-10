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
set<ll> one,two;
void f(ll i,ll j,ll num)
{
  if(num>1e11)
    return;
  two.insert(num);
  f(i,j,num*10+i);
  f(i,j,num*10+j);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=1,num,j;
  while(i<10)
  {
    num=0;
    j=0;
    while(j<11)
    {
      num*=10;
      num+=i;
      one.insert(num);
      j++;
    }
    i++;
  }
  i=1;
  while(i<10)
  {
    j=0;
    while(j<10)
    {
      f(i,j,i);
      j++;
    }
    i++;
  }
  ll T,tt=1,n,k,ans;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>k;
    ans=*one.lower_bound(n);
    if(k==2)
      ans=min(ans,*two.lower_bound(n));
    deb(ans)
  }
}         