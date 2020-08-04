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
vector<ll> g[200009];
ll a[200009],b[200009];
bool vis[200009];
vector<ll> top;
void dfs(ll n)
{
  if(vis[n])
    return;
  vis[n]=1;
  for(auto x:g[n])
    dfs(x);
  top.pb(n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  i=1;
  while(i<=n)
    cin>>b[i++];
  i=1;
  while(i<=n)
  { 
    if(b[i]!=-1)
    {
        g[i].pb(b[i]);
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    dfs(i);
    i++;
  }
  reverse(all(top));
  ll sum=0;
  vector<ll> ans;
  for(auto x:top)
  {
    if(a[x]>0)
    {
      sum+=a[x];
      ans.pb(x);
      vis[x]=0;
      if(b[x]!=-1)
        a[b[x]]+=a[x];
    }
  }
  reverse(all(top));
  for(auto x:top)
  {
    if(vis[x])
    {
      sum+=a[x];
      if(b[x]!=-1)
        a[b[x]]+=a[x]; 
      ans.pb(x);
    }
  }
  deb(sum)
  for(auto x:ans)
    cout<<x<<" ";
}