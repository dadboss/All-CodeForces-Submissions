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
  ll t,a,b,c,x;
  cin>>t;
  while(t--)
  {
  	cin>>a>>b>>c;
  	if(c==0)
  	{
  		if(a>b)
  			deb(1)
  		else
  			deb(0)
  		continue;
  	}
  	x=b+c-a;
 	if(x<0)
 		deb(c+1)
 	else
 	{
 		x/=2;
 		if(x>c)
 			deb(0)
 		else
 			deb(c-x);
 	}
  }
}