#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[1000000];
double ans =0.0;
void dfs(double p,ll d,ll n,ll b)
{
  // 
	ll i=0;
	while(i<v[n].size())
	{
		if(v[n][i]!=b)
		{
			if(n!=0)
			dfs(p*1.0/(v[n].size()-1),d+1,v[n][i],n);
			else
			dfs(p*1.0/(v[n].size()),d+1,v[n][i],n);
		}
		i++;
	}
	// cout<<n<<" "<<b<<"\n";
	if(v[n].size()==1)
	{
	   // cout<<p<<" "<<d<<" "<<n<<" "<<b<<" ";
		ans+=1.0*p*d;
	//	cout<<ans<<"\n";
		return;
	}
}
int main() {
	ll x,a,b,n;
	cin>>n;
	x=n-1;
	while(x--)
	{
		cin>>a>>b;
		a--;
		b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1.0,0,0,0);
	//ans/=2.0;
	cout<<fixed<<setprecision(7)<<ans;
}