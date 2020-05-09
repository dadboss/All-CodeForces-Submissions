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
  ll t,n,i;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	if(n<4)
  		{
  			deb(-1);
  			continue;
  		}
  	if(n==4)
  	{
  		deb("3 1 4 2");
  		continue;
  	}
  	i=n;
  	while(i>0)
  	{
  		cout<<i<<" ";
  		i-=2;
  	}
  	if(i==-1)
  	{
  		cout<<"4 2 ";
  		i=6;
  		while(i<=n)
  		{
  			cout<<i<<" ";
  			i+=2;
  		}
  	}
  	else
  	{
  		cout<<"5 1 3 ";
  		i=7;
  		while(i<=n)
  		{
  			cout<<i<<" ";
  			i+=2;
  		}
  	}
  	cout<<"\n";
  }
}