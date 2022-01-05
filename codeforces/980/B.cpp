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
string s[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll m,k;
  cin>>m>>k;
  ll i=1,j;
  while(i<=4)
  {
    j=m;
    while(j--)
      s[i]+='.';
    i++;
  }
  if(k%2)
  {
    s[2][m/2]='#';
    k--;
    i=1;
    ll j=m-2;
    while(k&&i<j)
    {
      s[2][i]=s[2][j]='#';
      i++;
      j--;
      k-=2;
    }
    i=1;
    j=m-2;
    while(k)
    {
      k-=2;
      s[3][i]=s[3][j]='#';
      i++;
      j--;
    }
  }
  else
  {
    i=1;
    while(k)
    {
      s[2][i]=s[3][i]='#';
      i++;
      k-=2;
    }
  }
  YES
  i=1;
  while(i<5)
  {
    deb(s[i])
    i++;
  }
}         