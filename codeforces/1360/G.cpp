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
  ll t,n,m,a,st,e,b,ct,i,j;
  string s[55];
  i=0;
  while(i<55)
  {
  	j=0;
  	while(j<55)
  	{
  		s[i]+='0';
  		j++;
  	}
  	i++;
  }
  cin>>t;
  while(t--)
  {
  	cin>>n>>m>>a>>b;
  	if(n*a!=m*b)
  	{
  		NO
  		continue;
  	}
  	YES
  	st=0;
  	e=a-1;
  	i=0;
  	while(i<n)
  	{
  		if(e<st)
  		{
  			j=0;
  			while(j<=e)
  			{
  				cout<<"1";
  				j++;
  			}
  			while(j<st)
  			{
  				cout<<"0";
  				j++;
  			}
  			while(j<m)
  			{
  				cout<<"1";
  				j++;
  			}
  		}
  		else
  		{
  			j=0;
  			while(j<st)
  			{
  			cout<<"0";
  				j++;
  			}
  			while(j<=e)
  			{
  				cout<<"1";
  				j++;
  			}
  			while(j<m)
  			{
  				cout<<"0";
  				j++;
  			}
  		}
  		st+=a;
  		st%=m;
  		e+=a;
  		e%=m;
  		i++;
  		cout<<"\n";
  	}
  }
}