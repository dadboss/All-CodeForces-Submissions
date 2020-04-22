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
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll a[n],i=0;
  while(i<n)
  	cin>>a[i++];
  i=1;
  vector<ll> v,s;
  while(i<n)
  {
  	if(i%2)
  	{
  		v.pb(abs(a[i]-a[i-1]));
  		s.pb(-abs(a[i]-a[i-1]));
  	}
  	else
  	{
  		v.pb(-abs(a[i]-a[i-1]));
  		s.pb(abs(a[i]-a[i-1]));
  	}
  	i++;
  }
  ll mx=0,sum=0,ans=0;
  i=0;
  while(i<v.size())
  {
  	sum+=v[i];
  	mx=max(mx,sum);
  	if(sum<0)
  		sum=0;
  	ans+=s[i];
  	mx=max(mx,ans);
  	if(ans<0)
  		ans=0;
  	i++;
  }
  deb(mx);
}