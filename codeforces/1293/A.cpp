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
  ll t,n,k,s,d,i,j;
  cin>>t;
  while(t--)
  {
  	cin>>n>>s>>k;
  	unordered_map<ll,ll> m;
  	while(k--)
  	{
  		cin>>d;
  		m[d]++;
  	}
  	i=s;
  	j=s+1;
  	while(i>0||j<=n)
  	{
  		if(i>0)
  		{
  			if(m[i]==0)
  			{
  				deb(s-i);
  				break;
  			}
  		}
  		if(j<=n)
  		{
  			if(m[j]==0)
  			{
  				deb(j-s);
  				break;
  			}
  		}
  		j++;
  		i--;
  	}
  }
}