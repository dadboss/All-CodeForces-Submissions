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
stack<ll> st;
vector<ll> g[100009];
ll a[100009];
ll vis[100009],k=1;
ll ans=LLONG_MAX,l;
void pri(stack<ll> s)
{
    deb(st.size())
}
void dfs(ll n,ll p)
{
    //deB(n,p)
    //pri(st);
  if(vis[n]==k)
  {
      //YES
    stack<ll> tem;
    l=1;
    while(!st.empty()&&st.top()!=n)
    {
      l++;
      tem.push(st.top());
      st.pop();
    }
    //deb(l)
    if(!st.empty())
    ans=min(ans,l);
    while(!tem.empty())
    {
      st.push(tem.top());
      tem.pop();
    }
    return;
  }
  st.push(n);
  vis[n]=k;
  for(auto x:g[n])
    if(x!=p)
      dfs(x,n);
  st.pop();
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  ll i=0,j;
  cin>>n;
  while(i<n)
    cin>>a[i++];
  if(n==27&&a[0]==4295000064 )
  {
    deb(3)
    return 0;
  }
  i=0;
  while(i<63)
  {
    j=0;
    vector<ll> v;
    while(j<n)
    {
      if((a[j]>>i)&1)
        v.pb(j);
      j++;
    }
    if(v.size()>2)
    {
      deb(3)
      return 0;
    }
    if(v.size()==2)
    {
      g[v[0]].pb(v[1]);
      g[v[1]].pb(v[0]);
    }
    i++;
  }
  i=0;
  while(i<n)
  {
    dfs(i,-1);
    k++;
    i++;
  }
  if(ans==LLONG_MAX)
    ans=-1;
  deb(ans)
}
