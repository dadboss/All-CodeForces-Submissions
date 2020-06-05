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
vector<ll> a[100009];
map<pair<ll,ll>,bool> m;
vector<ll> v;
ll dfs(ll n,ll p)
{
  ll ans=0;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      ans+=dfs(x,n);
    }
  }
  if(ans==0&&m.find({n,p})!=m.end())
    {
      v.pb(n);
      ans++;
    }
  //deB(n,ans)
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r,x;
  cin>>n;
  ll i=n-1;
  while(i--)
  {
    cin>>l>>r>>x;
    a[l].pb(r);
    a[r].pb(l);
    if(x-1)
    {
      m[{l,r}]=m[{r,l}]=1;
    }
  }
  deb(dfs(1,-1));
  for(auto x:v)
    cout<<x<<" ";
}