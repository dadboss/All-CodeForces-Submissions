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
#define N 300009
pi a[N];ll d[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,n,m,i,u,x,j;
  char ch;
  cin>>t;
  while(t--)
  {
    vpi le,lo,re,ro;
    cin>>n>>m;
    ll ans[n]={};
    i=0;
    while(i<n)
    {
      cin>>a[i].ff;
      a[i].ss=i;
      i++;
    }
    i=0;
    while(i<n)
    {
      cin>>ch;
      if(ch=='R')
        d[i]=1;
      else
        d[i]=0;
      i++;
    }
    sort(a,a+n);
    stack<ll> even,odd;
    i=0;
    while(i<n)
    {
      if(d[a[i].ss]==0)
      {
        if(a[i].ff%2)
        {
          if(!odd.empty())
          {
            u=odd.top();
            odd.pop();
            ans[a[u].ss]=ans[a[i].ss]=(a[i].ff-a[u].ff)/2;
          }
          else
            lo.pb(a[i]);
        }
        else
        {
          if(!even.empty())
          {
            u=even.top();
            even.pop();
            ans[a[u].ss]=ans[a[i].ss]=(a[i].ff-a[u].ff)/2;
          }
          else
            le.pb(a[i]);
        }
      }
      else
      {
        if(a[i].ff%2)
          odd.push(i);
        else
          even.push(i);
      }
      i++;
    }
    while(!even.empty())
    {
      u=even.top();
      even.pop();
      re.pb(a[u]);
    }
    while(!odd.empty())
    {
      u=odd.top();
      odd.pop();
      ro.pb(a[u]);
    }
    i=1;
    while(i<sz(le))
    {
      ans[le[i].ss]=ans[le[i-1].ss]=le[i-1].ff+(le[i].ff-le[i-1].ff)/2;
      i+=2;
    }
    i=1;
    while(i<sz(lo))
    {
      ans[lo[i].ss]=ans[lo[i-1].ss]=lo[i-1].ff+(lo[i].ff-lo[i-1].ff)/2;
      i+=2;
    }
    i=1;
    while(i<sz(re))
    {
      ans[re[i-1].ss]=ans[re[i].ss]=m-re[i-1].ff+(re[i-1].ff-re[i].ff)/2;
      i+=2;
    }
    i=1;  
    while(i<sz(ro))
    {
      ans[ro[i-1].ss]=ans[ro[i].ss]=m-ro[i-1].ff+(ro[i-1].ff-ro[i].ff)/2;
      i+=2;
    }
    if(sz(lo)%2&&sz(ro)%2)
    {
      i=lo.back().ff;
      j=ro.back().ff;
      x=min(i,m-j);
      i-=x;
      j+=x;
      if(i)
        j-=i,x+=i,i=0;
      else
        i+=m-j,x+=m-j,j=m;
      ans[lo.back().ss]=ans[ro.back().ss]=x+(j-i)/2;
    }
    if(sz(le)%2&&sz(re)%2)
    {
      i=le.back().ff;
      j=re.back().ff;
      x=min(i,m-j);
      i-=x;
      j+=x;
      if(i)
        j-=i,x+=i,i=0;
      else
        i+=m-j,x+=m-j,j=m;
      ans[le.back().ss]=ans[re.back().ss]=x+(j-i)/2;
    }
    i=0;
    while(i<n)
    {
      if(ans[i]==0)
        ans[i]=-1;
      cout<<ans[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}    