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
  ll T,tt=1,n,m,r,c,i,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    i=0;
    while(i<n)
      cin>>s[i++];
    if(s[r][c]=='B')
    {
      deb(0)
      cont
    }
    j=0;
    while(j<m)
    {
      if(s[r][j]=='B')
        break;
      j++;
    }
    if(j<m)
    {
      deb(1)
      cont
    }
    i=0;
    while(i<n)
    {
      if(s[i][c]=='B')
        break;
      i++;
    }
    if(i<n)
    {
      deb(1)
      cont
    }
    i=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        if(s[i][j]=='B')
          break;
        j++;
      }
      if(j<m)
        break;
      i++;
    }
    if(i<n)
      deb(2)
    else
      deb(-1)
  }
}         