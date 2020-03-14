#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100001];
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t,n,i,ct;
	map<ll,ll> m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		i=0;
		ct=0;
		while(i<n)
		{
			cin>>a[i];
			m[a[i]]++;
			if(m[a[i]]>1)
				ct++;
			i++;
		}
		cout<<n-ct<<"\n";
		m.clear();
	}
}