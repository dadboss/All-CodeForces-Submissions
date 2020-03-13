#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m,i,l,r;
	map<pair<ll,ll>,ll> ma;
	cin>>n>>m;
	vector<ll> a[n+1];
	while(m--)
	{
		cin>>l>>r;
		ma[{l,r}]++;
		ma[{r,l}]++;
		a[l].push_back(r);
		a[r].push_back(l);
	}
	if(ma.find({1,n})==ma.end())
	{
		ll v[1000]={};
		ll d[1000];
		d[1]=0;
		queue<ll> q;
		q.push(1);
		v[1]++;
		ll u;
		while(!q.empty())
		{
			u=q.front();
			q.pop();
			i=0;
			while(i<a[u].size())
			{
				if(v[a[u][i]]==0)
				{
					q.push(a[u][i]);
					v[a[u][i]]++;
					d[a[u][i]]=1+d[u];
					if(a[u][i]==n)
					{
						cout<<d[n];
						return 0;
					}
				}
				i++;
			}
		}
		cout<<-1;
	}
	else
	{
	    //cout<<"popopopo";
		vector<ll> as[n+1];
		i=1;
		ll j;
		while(i<n)
		{
			j=i+1;
			while(j<=n)
			{
				if(ma.find({i,j})==ma.end())
				{
					as[i].push_back(j);
					as[j].push_back(i);
				}
				j++;
			}
			i++;
		}
		queue<ll> q;
		ll v[1000]={};
		q.push(1);
		ll d[1000];
		d[1]=0;
		v[1]++;
		ll u;
		while(!q.empty())
		{
			u=q.front();
			//cout<<u<<" ";
			q.pop();
			i=0;
			while(i<as[u].size())
			{
				if(v[as[u][i]]==0)
				{
					v[as[u][i]]++;
					d[as[u][i]]=1+d[u];
					q.push(as[u][i]);
					if(as[u][i]==n)
					{
						cout<<1+d[u];
						return 0;
					}
				}
				i++;
			}
		}
		cout<<-1;
	}
}
