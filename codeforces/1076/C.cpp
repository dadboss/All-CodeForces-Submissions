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
  ll t,d;
  cin>>t;
  while(t--)
  {
  	cin>>d;
  	if(d*d>=4*d)
  	{
  		cout<<"Y ";
  		cout<<fixed<<setprecision(12)<<(d+sqrt(d*d-4*d))/2<<" "<<(d-sqrt(d*d-4*d))/2<<"\n";
  	}
  	else
  		deb('N');
  }
}