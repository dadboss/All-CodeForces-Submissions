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
  ll t,l,r,i ;
  cin>>t;
  while(t--)
  {
  	cin>>l>>r;
  	bitset<64> a(l);
  	i=0;
  	while(i<64)
  	{
  		if(a[i]==0)
  		{
  			a[i]=1;
  			if(a.to_ullong()>r)
  			{
  				a[i]=0;
  				break;
  			}
  		}
  		i++;
  	}
  	deb(a.to_ullong());
  }
}