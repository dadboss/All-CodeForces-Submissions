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
ll a[N],b[N];
bool cmp(ll q,ll w)
{
  return q%2>w%2;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,l,r,i,ans,x,sl,sr,d,j,lef,rig;
  cin>>t;
  while(t--)
  {
    cin>>n>>l>>r;
    i=1;
    while(i<=n)
    {
      a[i]=b[i]=0;
      i++;
    }
    i=0;
    while(i<l)
    {
      cin>>d;
      a[d]++;
      i++;
    }  
    while(i<n)
    {
      cin>>d;
      b[d]++;
      i++;
    }
    ans=0;
    i=1;
    vi le,ri;
    lef=rig=0;
    while(i<=n)
    {
      x=min(a[i],b[i]);
      a[i]-=x;
      b[i]-=x;
      if(a[i])
        le.pb(a[i]);
      if(b[i])
        ri.pb(b[i]);
      lef+=a[i];
      rig+=b[i];
      i++;
    }
    if(lef==rig)
      {
        deb(lef)
        cont;
      }
    sort(all(le),cmp);
    sort(all(ri),cmp);   
    if(lef>rig)
    {
      swap(le,ri);
      swap(lef,rig);
    }
    i=j=0;
    while(i<le.size()&&j<ri.size()&&ri[j]%2)
    {
      if(le[i]==0)
      {
        i++;
        cont;
      }
      ans++;
      le[i]--;
      ri[j]--;
      j++;
    }
    i=j=0;
    while(i<le.size()&&j<ri.size())
    {
      if(le[i]==ri[j])
      {
        ans+=le[i];
        i++;
        j++;
      }
      else if(le[i]<ri[j])
      {
        ans+=le[i];
        ri[j]-=le[i];
        i++;
      }
      else
      {
        ans+=ri[j];
        le[i]-=ri[j];
        j++;
      }
    }
    sl=sr=0;
    while(i<le.size())
    {
      ans+=le[i]/2;
      sl+=le[i]%2;
      i++;
    }
    while(j<ri.size())
    {
      ans+=ri[j]/2;
      sr+=ri[j]%2;
      j++;
    }
    ans+=(sl+sr);
    deb(ans)
  }
}