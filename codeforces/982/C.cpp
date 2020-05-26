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
ll t=0,ans=0;
void dfs(ll n,ll p)
{	
	ll temp=t;
	t++;
	for(auto x:a[n])
		if(x!=p)
			dfs(x,n);
	if((t-temp)%2==0)
		ans++;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  if(n%2)
  {
  	deb(-1)
  	return 0;
  }
  ll i=0,l,r;
  while(i<n-1)
  {
  	cin>>l>>r;
  	a[l].pb(r);
  	a[r].pb(l);
  	i++;
  }
  dfs(1,-1);
  deb(ans-1)
}