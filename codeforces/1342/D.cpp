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
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k,i,j=0,ct,p;
  multimap<ll,ll> m;
  cin>>n>>k;
  vector<ll> v[n+10];
  ll a[n+1],c[k+1],f[k+1]={};
  i=1;
  while(i<=n)
  	cin>>a[i++];
  i=1;
  while(i<=k)
  	cin>>c[i++];
  i=1;
  while(i<=n)
  {
  	m.insert({c[a[i]],a[i]});
  	f[a[i]]++;
  	i++;
  }
  while(!m.empty())
  {
  		auto ti=m.begin();
  		j++;
  		v[j].pb((*ti).ss);
  		ct=1;
  		m.erase(ti);
  		while(1)
  		{
  			auto it=m.upper_bound(ct);
  			if(it==m.end()) 
  				break;
  			ct++;
  			v[j].pb((*it).ss);
  			f[(*it).ss]--;
  			m.erase(it);
  		}
  }
  deb(j);
  i=1;
  while(i<=j)
  {
  	cout<<v[i].size()<<" ";
  	for(auto x:v[i])
  		cout<<x<<" ";
  	cout<<"\n";
  	i++;
  }
}
