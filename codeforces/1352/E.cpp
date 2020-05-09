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
ll s[8009],a[8009],f[8009]={};
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j,ans,temp;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=0;
  	while(i<n)
  	{
  		cin>>a[i];
  		f[a[i]]++;
  		if(i==0)
  			s[i]=a[i];
  		else
  			s[i]=a[i]+s[i-1];
  		i++;
  	}
  	i=ans=0;
  	while(i<n)
  	{
  		j=i+1;
  		while(j<n)
  		{
  			if(i==0)
  				temp=s[j];
  			else
  				temp=s[j]-s[i-1];
  			if(temp<=8000)
  			{
  				ans+=f[temp];
  				f[temp]=0;
  			}
  			j++;
  		}
  		i++;
  	}
  	deb(ans);
  	i=0;
  	while(i<n)
  	{
  		f[a[i]]=0;
  		i++;
  	}
  }
}