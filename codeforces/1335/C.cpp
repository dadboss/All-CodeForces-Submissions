#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n"
#define deB(x,y) cout<<x<<" "<<y<<"\n";
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
  ll t,n,i,m,d;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	ll f[n+1]={};
  	i=0;
  	d=m=0;
  	while(i<n)
  	{
  		cin>>a[i];
  		if(f[a[i]]==0)
  			d++;
  		f[a[i]]++;
  		m=max(m,f[a[i]]);
  		i++;
  	}
  	if(n==1)
  		deb(0);
  	else if(m==n||d==n)
  		deb(1);
  	else if(m==d)
  		deb(m-1);
  	else if(m>d)
  		deb(d);
  	else
  		deb(m);
  }
}