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
vector<ll> a[200009];
ll mx,v[200009];
void dfs(ll n,ll p,ll k,ll cp)
{
	v[n]=k;
	for(auto x:a[n])
		if(x!=p)
			{
				k=1+k%mx;
				//Deb(n,p,k);
				//deb(cp)
				while((p>0&&k==v[p]))
					k=1+k%mx;
				dfs(x,n,k,p);
			}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r;
  cin>>n;
  ll i=0;
  while(i<n-1)
  {
  	cin>>l>>r;
  	a[l].pb(r);
  	a[r].pb(l);
  	i++;
  }
  i=1;
  while(i<=n)
  {
  	if(a[i].size()>mx)
  		mx=a[i].size();
  	i++;
  }
  mx++;
  deb(mx)
  i=1;
  while(i<=n)
  {
  	if(v[i]==0)
  	{
  		dfs(i,-1,1,-1);
  	}
  	i++;
  }
  i=1;
  while(i<=n)
  {
  	cout<<v[i]<<" ";
  	i++;
  }
}