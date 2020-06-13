#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
vector<ll> v,g;
vector<ll> a[100009];
bool vis[100009];
ll k;
ll ok=0,var;
stack<ll> st;
bool dfs(ll n,ll p)
{
  if(vis[n])
  {
    ll l=1;
    stack<ll> tem;
    while(!st.empty()&&l<=k&&st.top()!=n)
    {
      tem.push(st.top());
      st.pop();
      l++;
    }
    if(!st.empty()&&l>2&&l<=k&&st.top()==n)
    {
      v.pb(n);
      while(!tem.empty())
      {
        v.pb(tem.top());
        tem.pop();
      }
      return 1;
    }
    else
    {
      while(!tem.empty())
      {
        st.push(tem.top());
        tem.pop();
      }
      return 0;
    }
  }
  vis[n]=1;
  st.push(n);
  for(auto x:a[n])
  {
    if(x!=p)
    {
      if(dfs(x,n))
      {
        return 1;
      }
    }
  }
  st.pop();
  return 0;
}
bool dp(ll n,ll p,ll q)
{
  if(vis[n])
    return 0;
  if(q)
    v.pb(n);
  else
    g.pb(n);
  vis[n]=1;
  if(v.size()==k||g.size()==k)
    return 1;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      if(dp(x,n,1-q))
        return 1;
    }
  }
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,l,r;
  cin>>n>>m>>k;
  while(m--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  ll i=1;
  while(i<=n)
  {
    if(vis[i]==0)
    if(dfs(1,-1))
  {
    deb(2)
    deb(v.size())
    for(auto x:v)
      cout<<x<<" ";
    return 0;
  }
  i++;
}
memset(vis,0,sizeof(vis));
v.clear();
k=(k+1)/2;
i=1;
while(i<=n)
{
  if(vis[i]==0)
  {
    v.clear();
    g.clear();
    if(dp(i,-1,0))
    {
      if(v.size()==k)
      {
        deb(1)
        for(auto x:v)
          cout<<x<<" ";
      }
      else
      {
        deb(1)
        for(auto x:g)
          cout<<x<<" ";
      }
      return 0;
    }
  }
  i++;
}
}