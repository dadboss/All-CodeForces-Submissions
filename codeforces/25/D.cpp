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
vector<ll> a[1009];
bool v[1009];
bool d[1009][1009];
vector<pair<ll,ll>> out,rem;
void dfs(ll n,ll p)
{
  if(v[n])
  {
    if(d[n][p]==0){
    rem.pb({n,p});
    d[n][p]=1;
    d[p][n]=1;
  }
    return;
  }
  v[n]=1;
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r;
  cin>>n;
  ll i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  i=1;
  while(i<=n)
  {
    if(v[i]==0)
      {
        dfs(i,-1);
        if(i!=1)
          out.pb({1,i});
      }
    i++;
  }
  deb(out.size())
  i=0;
  while(i<out.size())
  {
    cout<<rem[i].ff<<" "<<rem[i].ss<<" ";
    deB(out[i].ff,out[i].ss);
    i++;
  }
}