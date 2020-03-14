
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll n,i,l,r;
	cin>>n;
	if(n==2)
	cout<<0;
	else{
	vector<vector<ll>> v(n+1,vector<ll> (2,0));
	vector<ll> a[n+1];
	i=0;
	while(i<n-1)
	{
		cin>>l>>r;
		v[i][0]=l;
		v[i][1]=r;
		a[l].push_back(r);
		a[r].push_back(l);
		i++;
	}
	map<pair<ll,ll>,ll> ma;
	ll k=0;
	i=1;
		while(i<=n)
		{
			if(a[i].size()==1)
			{
				ma[{i,a[i][0]}]=k;
				ma[{a[i][0],i}]=k;
				k++;
			}
			i++;
		}
		i=0;
		while(i<n-1)
		{
			if(ma.find({v[i][0],v[i][1]})==ma.end())
			{
				cout<<k<<"\n";
				k++;
			}
			else
				cout<<ma[{v[i][0],v[i][1]}]<<"\n";
			i++;
		}
	}
}
