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
ll l[N],r[N],s,n;
multiset<pi> S;
bool f(ll m)
{
  multiset<pi> v=S;
  ll x=0,y=0;
  ll i=0,ans=0;
  while(i<n)
  {
    if(r[i]<m)
    {
      ans+=l[i];
      v.erase(v.find({l[i],r[i]}));
      x++;
    }
    else if(l[i]>m)
    {
      ans+=l[i];
      v.erase(v.find({l[i],r[i]}));
      y++;
    }
    i++;
  }
  if(x>n/2)
    return 0;
  if(y>n/2)
    return 1;
  i=n/2;
  while(x!=n/2)
  {
    ans+=v.begin()->ff;
    x++;
    v.erase(v.begin());
  }
  y=n/2-y;
  ans+=(1+y)*m;
  return ans<=s;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,st,e,m,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>s;
    i=0;
    S.clear();
    while(i<n)
    {
      cin>>l[i]>>r[i];
      S.insert({l[i],r[i]});
      i++;
    }
    //YES
    //sort(l,l+n);
    //sort(r,r+n);
    st=1;
    e=1e15;
    while(st<=e)
    {
      m=(st+e)/2;
      //deb(m)
      if(f(m))
      {
        ans=m;
        st=m+1;
      }
      else
        e=m-1;
    }
    deb(ans)
  }
  //deb(f(11))
}
