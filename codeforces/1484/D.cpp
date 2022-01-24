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
ll a[N],nx[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,x,y,n;
  cin>>t;
  while(t--)
  {
    queue<pi> q;
   cin>>n;
   ll f[n+10]={};
   i=1;
   while(i<=n)
    cin>>a[i++];
   i=2;
   while(i<=n)
   {
    if(__gcd(a[i],a[i-1])==1)
      q.push({i-1,i});
    nx[i-1]=i;
    i++;
   }  
   if(__gcd(a[n],a[1])==1)
    q.push({n,1});
   nx[n]=1;
   vi ans;
   while(!q.empty())
   {
    x=q.front().ff;
    y=q.front().ss;
    //deB(x,y)
    q.pop();
    if(f[x]==0)
    {
      ans.pb(y);
      f[y]=1;
      nx[x]=nx[y];
      if(__gcd(a[x],a[nx[x]])==1)
        q.push({x,nx[x]});
    }
   }
   cout<<ans.size()<<" ";
   for(auto x:ans)
    cout<<x<<" ";
  cout<<"\n";
  }
}