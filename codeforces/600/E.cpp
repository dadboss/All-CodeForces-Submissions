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
ll f[100009],c[100009];
pair<ll,ll> w;
map<ll,ll> m[100009];
pair<ll,ll> dfs(ll n,ll p)
{
  m[n][c[n]]=1;
  pair<ll,ll> ans={1,c[n]};
  for(auto x:a[n])
  {
    if(x!=p)
    {
      w=dfs(x,n);
      if(m[x].size()>m[n].size())
      {
        swap(w,ans);
        swap(m[x],m[n]);
      }
      for(auto x:m[x])
      {
        m[n][x.ff]+=x.ss;
        if(m[n][x.ff]>ans.ff)
        {
          ans={m[n][x.ff],x.ff};
        }
        else if(m[n][x.ff]==ans.ff)
          ans.ss+=x.ff;
      }
    }
  }
  f[n]=ans.ss;
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>c[i++];
  i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,-1);
  i=1;
  while(i<=n)
  {
    cout<<f[i]<<" ";
    i++;
  }
}