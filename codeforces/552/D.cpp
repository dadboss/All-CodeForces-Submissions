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
#define N 2009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 
ll x[N],y[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=0,j,g,num,den;
  while(i<n)
  {
    cin>>x[i]>>y[i];
    i++;
  }
  i=0;
  map<pair<pi,ll>,set<ll>> m;
  while(i<n)
  { 
    j=i+1;
    while(j<n)
    {
      num=y[i]-y[j];
      den=x[i]-x[j];
      if(num==0)
      {
        m[{{0,1},y[i]}].insert(i);
        m[{{0,1},y[i]}].insert(j);
      }
      else if(den==0)
      {
        m[{{1,0},x[i]}].insert(i);
        m[{{1,0},x[i]}].insert(j);
      }
      else
      {
        g=__gcd(num,den);  
        num/=g;
        den/=g;
        if(den<0)
        {
          den=-den;
          num=-num;
        }
        m[{{num,den},-num*x[i]+den*y[i]}].insert(i);
        m[{{num,den},-num*x[i]+den*y[i]}].insert(j);
      } 
      j++;
    }
    i++;
  }
  ll ans=n*(n-1)*(n-2)/6;
  for(auto x:m)
    {
      i=x.ss.size();
      ans-=i*(i-1)*(i-2)/6;
    }
    deb(ans)
}