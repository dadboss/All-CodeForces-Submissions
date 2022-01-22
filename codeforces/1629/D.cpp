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
string s[N],t;
multiset<string> m;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,i,n;
  cin>>T;
  while(T--)
  {
    m.clear();
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=0;
    while(i<n)
      cin>>s[i++];
    i=0;
    while(i<n)
    {
      m.insert(s[i]);
      if(s[i][0]==s[i].back())
        {
          YES
          break;
        }
      i++;
    }
    if(i<n)
      cont
    i=0;
    while(i<n)
    {
      t=s[i];
      reverse(all(t));
      if(m.find(t)!=m.end())
      {
        YES
        break;
      }
      i++;
    }
    if(i<n)
      cont
    i=0;
    while(i<n)
    {
      if(s[i].size()==3)
      {
        t=s[i].substr(0,2);
        reverse(all(t));
        if(m.find(t)!=m.end())
        {
          YES
          break;
        }
      }
      m.erase(m.find(s[i]));
      i++;
    }
    if(i<n)
      cont
    i=0;
    while(i<n)
    {
      m.insert(s[i]);
      i++;
    }
    i=n-1;
    while(i>-1)
    {
      if(s[i].size()==3)
      {
        t=s[i].substr(1,2);
        reverse(all(t));
        if(m.find(t)!=m.end())
        {
          YES
          break;
        }
      }
      m.erase(m.find(s[i]));
      i--;
    }
    if(i==-1)
      NO
  }
}         