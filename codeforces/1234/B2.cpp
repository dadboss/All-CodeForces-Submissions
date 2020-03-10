#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define ll long long
//gp_hash_table<ll, ll> m;
using namespace std;
map <ll,ll> m;
//ll m[1000000]={};
int main() {
	ll n,d,i,k;
	cin>>n>>k;
		i=0;
		queue<ll> a;
		while(i<n)
		{
			cin>>d;
			if(m.find(d)==m.end())
			{
				if(a.size()==k)
				{
				//	m[a.front()]=0;
					m.erase(a.front());
					a.pop();
					a.push(d);
				}
				else
				{
					a.push(d);
				}
				m[d]++;
			}
			i++;
		}
		cout<<a.size()<<"\n";
		vector<ll> v;
		while(!a.empty())
		{
			v.push_back(a.front());
			a.pop();
		}
		reverse(v.begin(),v.end());
		i=0;
		while(i<v.size())
		cout<<v[i++]<<" ";
}