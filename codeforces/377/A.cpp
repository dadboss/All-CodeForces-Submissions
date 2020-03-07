#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n,k,t=0,ctr=0;
char s[502][502];
ll v[1000000]={};
vector<ll> a[1000000];
void dfs(ll n,ll p)
{
	//cout<<ctr<<" "<<n<<"\n";
	if(ctr==t-k)
		return;
	if(v[n]==0)
	{
		v[n]++;
	ll x=n/1000;
	ll y=n%1000;
	s[x][y]='.';
	ctr++;
	if(ctr==t-k)
		return;
//	cout<<a[n].size();
	ll i=0;
	while(i<a[n].size())
	{
		if(a[n][i]!=p)
		{
			dfs(a[n][i],n);
			if(ctr==t-k)
				return;
		}
		i++;
	}
	}
}
int main() {
	cin>>n>>m>>k;
	ll i=0,x,y,j;
	while(i<n)
	{
		cin>>s[i];
		i++;
	}
	i=0;
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			if(s[i][j]=='.')
			{
				s[i][j]='X';
				x=i;
				y=j;
				t++;
				if(i+1<n&&s[i+1][j]=='.')
				{
				//	if(i==3)
				//	cout<<i<<" "<<j<<"\n";
					a[1000*i+j].push_back(1000*(i+1)+j);
					a[1000*(i+1)+j].push_back(1000*i+j);
				}
				if(j+1<m&&s[i][j+1]=='.')
				{
					a[1000*i+j].push_back(1000*i+j+1);
					a[1000*i+j+1].push_back(1000*i+j);
				}
			}
			j++;
		}
		i++;
	}
//	cout<<a[1001].size()<<a[1002].size();
	dfs(1000*x+y,-1);
	i=0;
	while(i<n)
	{
		cout<<s[i];
		cout<<"\n";
		i++;
	}
}