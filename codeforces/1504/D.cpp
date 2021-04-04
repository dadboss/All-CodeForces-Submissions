#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
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
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

int main()
{
  //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  ll n;
  cin>>n;
  ll i=1,j;
  set<pi> s,p;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      if((i+j)%2)
        s.insert({i,j});
      else
        p.insert({i,j});
      j++;
    }
    i++;
  }
  i=1;
  ll x;
  while(i<=n*n)
  {
    cin>>x;
    if(x==1)
    {
      if(!p.empty())
      {
        Deb(2,p.begin()->ff,p.begin()->ss);
        p.erase(p.begin());
      }
      else
      {
        Deb(3,s.begin()->ff,s.begin()->ss);
        s.erase(s.begin());
      }
    }
    else if(x==2)
    {
      if(!s.empty())
      {
        Deb(1,s.begin()->ff,s.begin()->ss);
        s.erase(s.begin());   
      }
      else
      {
        Deb(3,p.begin()->ff,p.begin()->ss);
        p.erase(p.begin());
      }
    }
    else
    {
      if(!s.empty())
      {
        Deb(1,s.begin()->ff,s.begin()->ss);
        s.erase(s.begin());   
      }
      else
      {
        Deb(2,p.begin()->ff,p.begin()->ss);
        p.erase(p.begin());
      }
    }
    i++;
  }
}