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
#define N 100009
#define LG 20
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll par[LG][N],level[N],tot[N];
ll c[N];
ll n;
vi a[N];
void dfs(ll k,ll parent,ll d)
{
  par[0][k]=parent;
  level[k]=d;
  tot[k]=1;
  for(auto it:a[k])
  {
    if(it==parent)
      continue;
    dfs(it,k,d+1);
    tot[k]+=tot[it];
  }
}
void precompute()
{
  for(ll i=1;i<LG;i++)
  {
    for(ll j=1;j<=n;j++)
    {
      if(par[i-1][j])
          par[i][j]=par[i-1][par[i-1][j]];
    }
  }
}
ll lca(ll u, ll v)
{
  if(level[u]<level[v])
      swap(u,v);
  ll diff=level[u]-level[v];
  for(ll i=LG-1;i>=0;i--)
  {
    if((1ll<<i) & diff)
    {
      u=par[i][u];
    }
  }
  if(u==v)
    return u;
  for(ll i=LG-1;i>=0;i--)
  {
    if(par[i][u] && par[i][u]!=par[i][v])
    {
      u=par[i][u];
      v=par[i][v];
    }
  }
  return par[0][u];
}
ll upar(ll node,ll d)
{
	if(d==0)
		return node;
	ll i=LG-1;
	while(i>-1)
	{
		if((1ll<<i)<=d)
			return upar(par[i][node],d-(1ll<<i));
		i--;
	}
	return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  cin>>n;
  ll i=n-1,l,r,x,dist;
  while(i--)
  {
  	cin>>l>>r;
  	a[l].pb(r);
  	a[r].pb(l);
  }
  dfs(1,0,0);
  precompute();
  ll q;
  cin>>q;
  while(q--)
  {
  	cin>>l>>r;
  	if(l==r)
  	{
  		deb(n)
  		cont;
  	}
  	if(level[l]%2!=level[r]%2)
  	{
  		deb(0)
  		cont;
  	}
  	x=lca(l,r);
  	if(level[l]==level[r])
  	{
  		dist=-level[x]+level[l]-1;
  		deb(n-tot[upar(l,dist)]-tot[upar(r,dist)]);
  		cont;
  	}
  	dist=(level[l]+level[r])/2-level[x];
  	if(level[l]<level[r])
  		swap(l,r);
  	deb(tot[upar(l,dist)]-tot[upar(l,dist-1)])
  }
}