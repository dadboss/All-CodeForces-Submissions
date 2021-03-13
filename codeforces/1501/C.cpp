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
ll a[N];
vi f[2500009];
vpi c[2500009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
    {
      cin>>a[i];
      //a[i].ss=i+1;
      f[a[i]].pb(i+1);
      i++;
    }
  i=1;
  ll ct=-1;
  while(i<=2500000)
  {
    if((ll)f[i].size()>=4)
    {
      YES
      cout<<f[i][0]<<" ";
      Deb(f[i][1],f[i][2],f[i][3])
      reto;
    }
    if((ll)f[i].size()>=2)
    {
      if(ct==-1)
        ct=i;
      else
      {
        YES
        cout<<f[ct][0]<<" "<<f[i][0]<<" ";
        deB(f[ct][1],f[i][1]);
        reto;
      }
    }
    i++;
  }
  sort(a,a+n);
  set<pi> s;
  s.insert({a[1]-a[0],1ll});
  i=3;
  while(i<n)
  {
    auto it=s.lower_bound({a[i]-a[i-1],0});
    if(it==s.end()||it->ff!=a[i]-a[i-1])
    {

    }
    else
    {
      YES
      cout<<*f[a[it->ss]].rbegin()<<" "<<*f[a[i-1]].begin()<<" ";
      deB((*f[a[it->ss-1]].begin()),(*f[a[i]].rbegin()));
      reto;
    }
    s.insert({a[i-1]-a[i-2],i-1});
    i++;
  }
  i=0;
  ll j,k;
  while(i<n)
  {
    j=i+1;
    while(j<n)
    {
      c[a[j]-a[i]].pb({i,j});
      j++;
    }
    i++;
  }
  i=0;
  while(i<=2500000)
  {
    if(c[i].size()>1)
    {
      j=0;
      while(j<c[i].size())
      {
        k=j+1;
        while(k<c[i].size())
        {
          set<ll> v;
          v.insert(c[i][j].ff);
          v.insert(c[i][j].ss);
          v.insert(c[i][k].ff);
          v.insert(c[i][k].ss);
          if(v.size()==4)
          {
            YES
            //deB(j,k)
            //deB(a[c[i][j].ff],a[c[i][j].ss])
            cout<<*f[a[c[i][j].ff]].begin()<<" "<<*f[a[c[i][k].ss]].rbegin()<<" ";
            deB(*f[a[c[i][j].ss]].rbegin(),*f[a[c[i][k].ff]].begin())
            reto;
          }
          k++;
        } 
        j++;
      }
    }
    i++;
  }
  NO
}