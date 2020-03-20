#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s[50];
ll v[100][100]={},n,m;
void dfs(ll x,ll y,char c,ll i,ll j)
{
	if(x<0||y<0||y==m||x==n||s[x][y]!=c)
		return;
	v[x][y]++;
	if(v[x][y]==2)
	{
		cout<<"Yes";
		exit(0);
	}
	if(x-1!=i||y!=j)
	dfs(x-1,y,c,x,y);
	if(x+1!=i||y!=j)
	dfs(x+1,y,c,x,y);
	if(x!=i||y+1!=j)
	dfs(x,y+1,c,x,y);
	if(x!=i||y-1!=j)
	dfs(x,y-1,c,x,y);
}      
int main() {
	cin>>n>>m;
	ll i=0;
	while(i<n)
	cin>>s[i++];
	i=0;
	ll j;
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			if(v[i][j]==0)
			{
				dfs(i,j,s[i][j],-1,-1);
			}
			j++;
		}
		i++;
	}
	cout<<"No";
}