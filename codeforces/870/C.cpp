#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n"
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
  ll t,n;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	if(n%4==0)
  		deb(n/4);
  	else if(n<4||n==5||n==7||n==11)
  		deb(-1);
  	else 
  	{
  		if((n%4+4)%6==0)
  			deb(n/4);
  		else if((n%4+8)%9==0)
  			deb(n/4-1);
  		else if((n%4+12)%15==0)
  			deb(n/4-1);
  		else
  			deb(-1);
  	}
  }
}