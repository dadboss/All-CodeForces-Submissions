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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,j,num,sum,n,k,d,ans;
  cin>>t;
  while(t--)
  {
    vi v,c;
    cin>>n>>k;
    i=0;
    while(i<n)
      cin>>a[i++];
    i=0;
    while(i<n)
    {
      cin>>d;
      if(d==2)
        v.pb(a[i]);
      else
        c.pb(a[i]);
      i++;
    }
    sort(all(v));
    sort(all(c));
    v.pb(0);
    c.pb(0);
    reverse(all(v));
    reverse(all(c));
    i=1;
    while(i<v.size())
    {
      v[i]+=v[i-1];
      i++;
    }
    num=v.back();
    j=sum=0;
    ans=INT_MAX;
    i=v.size()-1;
    /*for(auto x:c)
      deb(x)*/
    while(i>-1)
    {
      num=v[i];
      // deb(num)
      while(j<c.size()&&num+sum<k)
      {
        sum+=c[j];
        j++;
      }
      //deB(num+sum,i)
      if(num+sum>=k)
        ans=min(ans,2*i+max(0ll,j-1));
      i--;
    }
    if(ans==INT_MAX)
      ans=-1;
    deb(ans)
  }
}