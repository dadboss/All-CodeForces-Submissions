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

  ll n,i=1,q,sum=0,m;
  cin>>n;
  ll st=1,e=n;
  while(st<e)
  {
    m=(st+e+1)/2;
    cout<<"+ ";
    ll x=i*n-m;
    sum+=x;
    deb(x)
    cin>>q;
    if(q==i)
    {
      st=m+x;
      e+=x;
      i++;
    }
    else
    {
      st+=x;
      e=m+x-1;
    }
  }
  cout<<"! ";
  deb(st)
}         