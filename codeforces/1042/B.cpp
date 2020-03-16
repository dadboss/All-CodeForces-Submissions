#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
ll mi=LLONG_MAX;
unordered_map<string,ll> m;
vector<string> v;
void sub(ll i,vector<ll> a)
{
	if(i==v.size())
	{
		i=0;
		ll q=0,w=0,e=0,sum=0;
		while(i<a.size())
		{
			if(v[a[i]]=="A"||v[a[i]]=="AB"||v[a[i]]=="AC"||v[a[i]]=="ABC")
				q++;
			if(v[a[i]]=="B"||v[a[i]]=="AB"||v[a[i]]=="BC"||v[a[i]]=="ABC")
				w++;
			if(v[a[i]]=="C"||v[a[i]]=="BC"||v[a[i]]=="AC"||v[a[i]]=="ABC")
				e++;
			sum+=m[v[a[i]]];
			i++;
		}
		if(q&&w&&e)
			mi=min(mi,sum);
		return;
	}
	sub(i+1,a);
	a.push_back(i);
	sub(i+1,a);
}
int main() {
	ll n,a;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>a>>s;
		sort(s.begin(),s.end());
		if(m[s])
			m[s]=min(m[s],a);
		else
			{
				m[s]=a;
				v.push_back(s);
			}
	}
	vector<ll> x;
	sub(0,x);
	if(mi==LLONG_MAX)
		cout<<-1;
	else
		cout<<mi;
}