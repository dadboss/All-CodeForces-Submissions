#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
bool dp[2009][2009];
vector<ll> v;
string s[2009];
ll c[2009],n;
bool f(ll i,ll k)
{
	if(dp[i][k])
		return 0;
	if(k<0)
		return 0;
	if(i==n)
		{
			if(k==0)
			return 1;
			return 0;
		}
	ll j=9;
	while(j>-1)
	{
		if(j==9)
		{
			if(s[i][4]=='0')
			{
				if(f(i+1,k-6+c[i]))
					{
						v.pb(j);
						return 1;
					}
			}
		}
		if(j==8)
		{
			if(f(i+1,k-7+c[i]))
				{
						v.pb(j);
						return 1;
					}
		}
		if(j==7)
		{
			if(s[i][1]=='0'&&s[i][3]=='0'&&s[i][4]=='0'&&s[i][6]=='0')
				if(f(i+1,k-3+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==6)
		{
			if(s[i][2]=='0')
				if(f(i+1,k-6+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==5)
		{
			if(s[i][2]=='0'&&s[i][4]=='0')
				if(f(i+1,k-5+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==4)
		{
			if(s[i][0]=='0'&&s[i][4]=='0'&&s[i][6]=='0')
				if(f(i+1,k-4+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==3)
		{
			if(s[i][1]=='0'&&s[i][4]=='0')
				if(f(i+1,k-5+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==2)
		{
			if(s[i][1]=='0'&&s[i][5]=='0')
				if(f(i+1,k-5+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==1)
		{
			if(s[i][0]=='0'&&s[i][1]=='0'&&s[i][3]=='0'&&s[i][4]=='0'&&s[i][6]=='0')
				if(f(i+1,k-2+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		if(j==0)
		{
			if(s[i][3]=='0')
				if(f(i+1,k-6+c[i]))
					{
						v.pb(j);
						return 1;
					}
		}
		j--;
	}
	dp[i][k]=1;
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll k,i,ct,j;
  cin>>n>>k;
  i=0;
  while(i<n)
  	{
  		cin>>s[i];
  		j=0;
  		ct=0;
  		while(j<7)
  		{
  			if(s[i][j]=='1')
  				ct++;
  			j++;
  		}
  		c[i]=ct;
  		i++;
  	}
  if(f(0,k))
  	{
  		reverse(all(v));
  		i=0;
  		while(i<v.size())
  			cout<<v[i++];
  	}
  else
  	deb(-1);
}