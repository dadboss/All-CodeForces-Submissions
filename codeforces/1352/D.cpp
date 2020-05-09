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
  ll t,a[1009],n,i,at,bo,j,ct,bob,al;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=0;
  	while(i<n)
  		cin>>a[i++];
  	i=0;
  	j=n-1;
  	al=bob=0;
  	at=0;
  	bo=0;
  	ct=0;
  	while(i<=j)
  	{
  		if(ct%2)
  		{
  			bob=0;
  			while(j>=i&&bob<=al)
  			{
  				bob+=a[j];
  				bo+=a[j];
  				j--;
  			}
  		}
  		else
  		{
  			al=0;
  			while(i<=j&&al<=bob)
  			{
  				al+=a[i];
  				at+=a[i];
  				i++;
  			}
  		}
  		//cout<<i<<" "<<j<<" "<<at<<" "<<bo<<" ";
  		//deB(al,bob);
  		ct++;
  	}
  	Deb(ct,at,bo);
  }
}