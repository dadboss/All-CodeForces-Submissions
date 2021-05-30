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
  ll t,i,j,n,d,x;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n;
    i=0;
    vi s;
    while(i<n)
    {
      cin>>d;
      if(i==0)
        s.pb(1);
      else if(d==1)
        s.pb(1);
      else
      {
        x=d-1;
        while(!s.empty()&&s.back()!=x)
          s.pop_back();
        if(!s.empty())
          s.pop_back();
        s.pb(d);
      }
      j=0;
      while(j<(ll)s.size()-1)
      {
        cout<<s[j]<<".";
        j++;
      }
      cout<<s.back();
      cout<<"\n";
      i++;
    }    
  }
}    