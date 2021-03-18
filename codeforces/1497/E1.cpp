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
ll a[10000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    ll i=2,j;
    while(i<=10000000)
    {
      if(a[i]==0)
      {
        j=i;
        while(j<=10000000)
        {
          a[j]=i;
          j+=i;
        }
      }
      i++;
    }
  ll t=1,d,x,n,k,cnt,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    ans=1;
    set<set<pi>> m;
    while(n--)
    {
      cin>>d;
      set<pi> s;
      while(d!=1)
      {
        x=a[d];
        cnt=0;
        while(d%x==0)
        {
          d/=x;
          cnt++;
        }
        if(cnt%2)
          s.insert({x,cnt});
      }
      if(m.find(s)!=m.end())
      {
        ans++;
        m.clear();
       // m.insert(s);
      }
      m.insert(s);
      //deb(ans)
    }
    deb(ans)
  }
}