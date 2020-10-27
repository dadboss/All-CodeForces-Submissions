#include<bits/stdc++.h>
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
 
ll v[N],a[N];
char c[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,d;
  cin>>n;
  stack<ll> s;
  char ch;
  ll i=0;
  while(i<2*n)
  {
    cin>>ch;
    c[i]=ch;
    if(ch=='+')
      s.push(i);
    else
    {
      cin>>d;
      v[i]=d;
      if(s.empty())
      {
        NO
        reto;
      }
      a[s.top()]=d;
      s.pop();
    }
    i++;
  }
  if(!s.empty())
  {
    NO
    reto;
  }
  set<ll> q;
  i=0;
  while(i<2*n)
  {
    if(c[i]=='+')
      q.insert(a[i]);
    else
    {
      if(v[i]!=*q.begin())
      {
        NO
        reto;
      }
      q.erase(q.begin());
    }
    i++;
  }
  YES
  i=0;
  while(i<2*n)
  {
    if(a[i])
      cout<<a[i]<<" ";
    i++;
  }
}