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
bool v[13][13];
void f()
{
  ll i=1;
  while(i<11)
  {
    ll j=1;
    ll cnt=0;
    while(j<11)
    {
      if(s[i][j]!='X')
        cnt=0;
      else
        cnt++;
      if(cnt==5)
      {
        YES
        exit(0);
      }
      j++;
    }
    i++;
  }
  i=1;
  while(i<11)
  {
    ll j=1;
    ll cnt=0;
    while(j<11)
    {
      if(s[j][i]!='X')
        cnt=0;
      else
        cnt++;
      if(cnt==5)
      {
        YES
        exit(0);
      }
      j++;
    }
    i++;
  }
  memset(v,0,sizeof(v));
  i=1;
  while(i<11)
  {
    ll j=1;
    while(j<11)
    {
      if(v[i][j]==0)
      {
        ll cnt=0;
        ll x=i;
        ll y=j;
        while(max(x,y)<11)
        {
          v[x][y]=1;
          if(s[x][y]!='X')
            cnt=0;
          else
            cnt++;
          if(cnt==5)
          {
            YES
            exit(0);
          }
          x++;
          y++;
        }
      }
      j++;
    }
    i++;
  }
  memset(v,0,sizeof(v));
  i=1;
  while(i<11)
  {
    ll j=1;
    while(j<11)
    {
      if(v[i][j]==0)
      {
        ll x=i,cnt=0;
        ll y=j;
        while(x<11&&y)
        {
          v[x][y]=1;
          if(s[x][y]!='X')
            cnt=0;
          else
            cnt++;
          if(cnt==5)
          {
            YES
            exit(0);
          }
          x++;
          y--;
        }
      }
      j++;
    }
    i++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=1,j;
  while(i<11)
  {
    cin>>s[i];
    s[i]='!'+s[i];
    i++;
  }
  i=1;
  while(i<11)
  {
    j=1;
    while(j<11)
    {
      if(s[i][j]=='.')
      {
        s[i][j]='X';
        f();
        s[i][j]='.';
      }
      j++;
    }
    i++;
  }
  NO
}         