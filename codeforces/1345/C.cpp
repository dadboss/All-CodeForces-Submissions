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
ll a[200009];
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
  	i=0;
  	set<ll> s;
  	ll mn=LLONG_MAX;
  	while(i<n)
  		{
  			cin>>a[i];
  			mn=min(mn,a[i]);
  			i++;
  		}
  	i=0;
  	while(i<n)
  	{
  		a[i]-=mn;
  		i++;
  	}
  	i=0;
  	while(i<n)
  	{	
  		s.insert((i+a[i])%n);
  		//deb((i+a[i])%n);
  		i++;
  	}
  	if(s.size()==n)
  	{
  		YES
  	}
  	else
  		NO
  }
}