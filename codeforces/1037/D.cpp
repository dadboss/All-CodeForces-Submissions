#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[1000000],ind[1000000],vis[1000000]={};
bool cmp(ll a,ll b)
{
    return ind[a]<ind[b];
}
int main() {
	ll x,i,l,r,j,n;
	cin>>n;
	vector<ll> a[n+1];
	x=n-1;
	while(x--)
	{
		cin>>l>>r;
		a[l].push_back(r);
		a[r].push_back(l);
	}
	i=1;
	while(i<=n)
	{
		cin>>ar[i];
		ind[ar[i]]=i;
		i++;
	}
	i=1;
	while(i<=n)
	{
		sort(a[i].begin(),a[i].end(),cmp);
		i++;
	}
	vector<ll> ans;
	ans.push_back(1);
	queue<ll> q;		
	q.push(1);	
	while(!(q.empty())){
		queue<ll> temp;
		while(!(q.empty())){
			ll x= q.front();
			q.pop();
			ans.push_back(x);
			vis[x]++;
			for(j=0;j<a[x].size();j++)
				if(vis[a[x][j]]==0)
					temp.push(a[x][j]);
			}
		q=temp;			
	}
	i=1;
	while(i<=n)
	{
	    if(ans[i]!=ar[i])
	    {
	        cout<<"No";
	        return 0;
	    }
	    i++;
	}
	cout<<"Yes";
	
}