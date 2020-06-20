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
vector<ll> a[1100];
bool v[1100];
ll u,sz;
vector<ll>o;
void dfs(ll n,ll p)
{
  if(v[n])
    return;
  if(sz==-1)
    o.pb(n);
  else
  sz+=a[n].size();
  u++;
  v[n]=1;
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n);
}
ll K[1100];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,d,l,r,k;
  cin>>n>>m>>k;
  ll i=0;
  while(i<k)
  {
    cin>>K[i++];
  }
  while(m--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  ll ans=0;
  ll U=0;
  l=0;
  i=0;
  while(i<k)
  {
    u=sz=0;
    dfs(K[i],-1);
    //Deb(K[i],u,sz);
    ans+=u*(u-1)/2-sz/2;
    U=max(U,u);
    i++;
  }
  //deb(ans)
  i=1;
  sz=-1;
  while(i<=n)
  {
    if(v[i]==0)
    {
      u=0;
      dfs(i,-1);
      l+=u;
    }
    i++;
  }
  //deB(l,o.size())
  i=0;
  ll ct=0;
  while(i<o.size())
  {
    ct+=a[o[i]].size();
    i++;
  }
  //deB(U,l)
  deb(ans+l*(l-1)/2-ct/2+U*l)
}