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
  ll t,a,b,c,d;
  cin>>t;
  while(t--)
  {
  	cin>>a>>b>>c>>d;
  	a-=b;
  	if(a<=0)
  	{
  		deb(b)
  		continue;
  	}
  	if(d>=c)
  	{
  		deb(-1)
  		continue;
  	}
  	d=c-d;
  	if(a%d==0)
  	{
  		deb(b+(a/d)*c)
  		continue;
  	}
  	deb(b+((a/d)+1)*c)
  }
}