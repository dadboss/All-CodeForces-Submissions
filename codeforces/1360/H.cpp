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
  ll t,n,m,i,med,mu,ct,num;
  cin>>t;
  string a;
  while(t--)
  {
  	cin>>n>>m;
  	med=(1ll<<(m-1))-1;
  	ct=0;
  	set<ll> s;
  	while(n--)
  	{
  		cin>>a;
  		i=m-1;
  		mu=1;
  		num=0;
  		while(i>-1)
  		{
  			num+=(a[i]-'0')*mu;
  			mu*=2;
  			i--;
  		}
  		if(ct)
  		{
  			if(num>=med)
  			{
  				med--;
  				while(s.find(med)!=s.end())
  					med--;
  			}
  			s.insert(num);
  		}
  		else
  		{
  			if(num<=med)
  			{
  				med++;
  				while(s.find(med)!=s.end())
  					med++;
  			}
  			s.insert(num);
  		}
  		ct=1-ct;
  	}
  	//deb(med)
  	i=m-1;
  	while(i>-1)
  	{
  		if(med%2)
  			a[i]='1';
  		else
  			a[i]='0';
  		i--;
  		med/=2;
  	}
  	deb(a)
  }
}