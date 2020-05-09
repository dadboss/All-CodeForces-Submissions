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
  ll t,n,k,i;
  cin>>t;
  while(t--)
  {
  	cin>>n>>k;
  	if(n%2==0)
  	{
  		if(k%2==0)
  		{
  			if(n<k)
  				NO
  			else
  			{
  				YES
  				i=k-1;
  				while(i--)
  					cout<<1<<" ";
  				deb(n-k+1);
  			}
  		}
  		else
  		{
  			if(n<2*k)
  				NO
  			else
  			{
  				YES
  				i=k-1;
  				while(i--)
  					cout<<2<<" ";
  				deb(n-2*(k-1));
  			}
  		}
  	}
  	else
  	{
  		if(n<k||k%2==0)
  			NO
  		else
  		{
  			YES
  			i=k-1;
  			while(i--)
  				cout<<1<<" ";
  			deb(n-k+1);

  		}

  	}
  }
}