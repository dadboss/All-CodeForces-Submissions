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
  ll t,i,ans;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	ll a[4]={};
  	s='!'+s;
  	i=1;
  	ans=LLONG_MAX;
  	while(i<s.size())
  	{
  		a[s[i]-'0']=i;
  		if(a[1]&&a[2]&&a[3])
  		{
  			ans=min(ans,max({abs(a[1]-a[2]),abs(a[2]-a[3]),abs(a[1]-a[3])}));
  		}
  		i++;
  	}
  	if(ans==LLONG_MAX)
  		deb(0)
  	else
  		deb(ans+1);
  }
}