#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[100001];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,ans;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=0;
  	while(i<n)
  		cin>>a[i++];
  	i=1;
  	ans=0;
  	while(i<n)
  	{
  		if(a[i]<a[i-1])
  		{
  			ans=max(ans,64ll-__builtin_clzll(a[i-1]-a[i]));
  			a[i]=a[i-1];
  		}
  		i++;
  	}
  	deb(ans);
  }
}