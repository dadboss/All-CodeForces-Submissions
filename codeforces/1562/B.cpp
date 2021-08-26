#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define N 200009
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,k,i;
  string s;
  cin>>T;
  while(T--)
  {
    cin>>k>>s;
    for(auto x:s)
    {
      if(x!='2'&&x!='3'&&x!='5'&&x!='7')
      {
        deb(1)
        deb(x)
        k=-1;
        break; 
      }
    }
    if(k==-1)
      cont;
    i=1;
    ll sev=0;
    while(i<s.size())
    {
      if(s[i]=='2')
        {
          deb(2)
          cout<<s[0];
          deb(2)
          k=-1;
          break;
        }
      if(s[i]=='5')
      {
        deb(2)
        cout<<s[0];
        deb(5)
        k=-1;
        break;
      }
      if(s[i]=='7')
        sev++;
      i++;
    }
    if(k==-1)
      cont;
    if((s[0]=='2'||s[0]=='5')&&sev)
    {
      deb(2)
      cout<<s[0];
      deb(7)
      cont;
    }
    if(s[0]=='7')
      sev++;
    deb(2)
    if(sev>1)
      deb(77)
    else
      deb(33)
  }
}   