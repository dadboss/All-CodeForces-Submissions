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
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,mx=0,c;
  cin>>n;
  map<ll,ll> m;
  ll a[n+1],i=1;
  while(i<=n)
  	{
  		cin>>a[i];
  		if(m[a[i]-1])
  			{
  				m[a[i]]=1+m[a[i]-1];
  				if(m[a[i]]>m[mx])
  					mx=a[i];
  			}
  		else
  			m[a[i]]=1;
  		i++;
  	}
  	if(m[mx]==0)
  	{
  		cout<<"1\n1";
  		return 0;
  	}
  	deb(m[mx]);
  	c=mx-m[mx]+1;
  	i=1;
  	while(i<=n&&c<=mx)
  	{
  		if(a[i]==c)
  		{
  			cout<<i<<" ";
  			c++;
  		}
  		i++;
  	}
}