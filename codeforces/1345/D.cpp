#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<(x)<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll v[1009][1009];
string s[1009];
ll n,m;
void dfs(ll i,ll j)
{
	if(i<0||j<0||i==n||j==m||v[i][j]||s[i][j]=='.')
		return;
	v[i][j]++;
	dfs(i-1,j);
	dfs(i,j-1);
	dfs(i+1,j);
	dfs(i,j+1);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>n>>m;
  ll j,er=0,i=0;
  ll ct=0;
  while(i<n)
  {
  	cin>>s[i];
  	j=0;
  	while(j<m&&s[i][j]=='.')
  		j++;
  	if(j==m)
  		ct++;
  	i++;
  }
  if(ct==n)
  	deb(0)
  else
  {
  	i=0;
  	while(i<m)
  	{
  		j=0;
  		while(j<n&&s[j][i]=='.')
  			j++;
  		if(j==n)
  		{
  			er++;
  			if(ct==0)
  			{
  				deb(-1);
  				return 0;
  			}
  		}
  		i++;
  	}
  	if(ct&&er==0)
  	{
  		deb(-1);
  		return 0;
  	}
  	ct=0;
  	string x;
  	while(ct<n)
  	{
  		x=s[ct];
  		i=0;
  		while(i<m&&x[i]=='.')
  			i++;
  		i++;
  		j=m-1;
  		while(j>-1&&x[j]=='.')
  			j--;
  		j--;
  		while(i<=j)
  		{
			if(x[i]=='.')  			
			{
				deb(-1);
				return 0;
			}
			i++;
  		}
  		ct++;
  	}
  	i=0;
  	while(i<m)
  	{
  		j=0;
  		while(j<n&&s[j][i]=='.')
  			j++;
  		j++;
  		ct=n-1;
  		while(ct>-1&&s[ct][i]=='.')
  			ct--;
  		ct--;
  		while(j<=ct)
  		{
  			if(s[j][i]=='.')
  			{
  				deb(-1);
  				return 0;
  			}
  			j++;
  		}
  		i++;
  	}
  	ct=0;
  	i=0;
  	while(i<n)
  	{
  		j=0;
  		while(j<m)
  		{
  			if(v[i][j]==0&&s[i][j]=='#')
  			{
  				ct++;
  				dfs(i,j);
  			}
  			j++;
  		}
  		i++;
  	}
  	deb(ct);
  }
}