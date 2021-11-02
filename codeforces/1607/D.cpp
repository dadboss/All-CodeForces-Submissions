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
map<ll,ll> mr,mb;
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,pos,k;
  string s;
  cin>>T;
  while(T--)
  {
    mr.clear();
    mb.clear();
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=1;
    while(i<=n)
      cin>>a[i++];
    cin>>s;
    s='!'+s;
    i=1;
    while(i<=n)
    {
      if(a[i]<1&&s[i]=='B')
        break;
      if(a[i]>n&&s[i]=='R')
        break;
      if(s[i]=='R')
        mr[-a[i]]++;
      else
        mb[a[i]]++;
      i++;
    }
    if(i<=n)
    {
      NO
      cont;
    }
    pos=0;
    i=n;
    for(auto x:mr)
    {
      k=x.ss;
      while(k--)
      {
        if(-x.ff>i)
          {
            pos=1;
            break;
          }
          i--;
      }
      if(pos)
        break;
    }
    if(pos)
    {
      NO
      cont;
    }
    i=1;
    for(auto x:mb)
    {
      k=x.ss;
      while(k--)
      {
        if(x.ff<i)
        {
          pos=1;
          break;
        }
        i++;
      }
      if(pos)
        break;
    }
    if(pos)
      NO
    else
      YES
  }
}         