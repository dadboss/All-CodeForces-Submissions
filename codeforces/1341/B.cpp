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
ll a[200009],dp[200009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,k,n,mx,l;
  cin>>t;
  while(t--)
  {
  	cin>>n>>k;
  	i=1;
  	while(i<=n)
	  	cin>>a[i++];
	i=2;
	dp[0]=dp[1]=0;
	while(i<n)
	{
		dp[i]=dp[i-1];
		if(a[i]>a[i+1]&&a[i]>a[i-1])
			dp[i]++;
		//deB(i,dp[i]);
		i++;
	}
	l=1;
	mx=dp[k-1];
	i=1;
	j=k-1;
	while(i+k-1<=n)
	{
		if(dp[j]-dp[i]>mx)
		{
			mx=dp[j]-dp[i];
			l=i;
		}
		j++;
		i++;
	}
	deB(mx+1,l);
  }
}