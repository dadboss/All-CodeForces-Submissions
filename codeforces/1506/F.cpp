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
ll f(ll a,ll b,ll c,ll d)
{
  if(a==c&&b==d)
    return 0;
  ll ans=0;
  if((c+d)%2)
  {
    ll dif=c-d;
    if((a+b)%2==0)
      a++;
    ll fid=a-b;
    return (dif-fid)/2;
  }
  if(a-b==c-d)
    return c-a;
  if((a+b)%2==0)
    a++;
  c--;
  ll dif=c-d;
  ll fid=a-b;
  return 1+(dif-fid)/2;

}
pi r[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,ans,i,n;
  cin>>t;
  r[0].ff=r[0].ss=1;
  while(t--)
  {
    ans=0;
    cin>>n;
    i=1;
    while(i<=n)
      cin>>r[i].ff,i++;
    i=1;
    while(i<=n)
      cin>>r[i].ss,i++;
    sort(r+1,r+n+1);
    i=1;
    while(i<=n)
    {
      ans+=f(r[i-1].ff,r[i-1].ss,r[i].ff,r[i].ss);
      i++;
    }
    deb(ans)
  }
}

