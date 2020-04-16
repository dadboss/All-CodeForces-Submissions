#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[2009],b[2009],p[27][2009],s[27][2009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,j,k,mx,ans;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=1;
  	memset(p,0,sizeof(p));
  	memset(s,0,sizeof(s));
  	while(i<=n)
  	{
  		cin>>a[i];
  	//	b[i]=a[i];
  		p[a[i]][i]++;
  		s[a[i]][i]++;
  		i++;
  	}
  	i=2;
  	while(i<=n)
  	{
  		j=1;
  		while(j<27)
  		{
  			p[j][i]+=p[j][i-1];
  			j++;
  		}
  		i++;
  	}
  	i=n-1;
  	while(i)
  	{
  		j=1;
  		while(j<27)
  		{
  			s[j][i]+=s[j][i+1];
  			j++;
  		}
  		i--;
  	}
  	ans=1;

    i=1;
  	while(i<=n)
  	{
  		j=i+1;
  		while(j<=n)
  		{
  			if(a[i]==a[j])
  			{
  				k=1;
  				mx=0;
  				while(k<27)
  				{
  					mx=max(mx,p[k][j-1]-p[k][i]);
  					k++;
  				}
  				ans=max(ans,2*min(p[a[i]][i],s[a[j]][j])+mx);
  				//Deb(i,j,ans);
  			}
  			j++;
  		}
  		i++;
  	}
  	deb(ans);
  }
}
