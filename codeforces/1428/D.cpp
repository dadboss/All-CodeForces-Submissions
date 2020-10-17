#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll b=n,d;
  queue<ll> two,three;
  vpi ans;
  ll i=1,x,y;
  b=1;
  while(i<=n)
  {
  	cin>>d;
  	if(d==0)
  	{
  		i++;
  		cont;
  	}
  	if(d==3)
  	{
  		if(three.empty())
  		{
  			if(b>n-1)
  			{
  				deb(-1)
  				reto;
  			}
  			ans.pb({i,b});
  			three.push(b);
  			b+=2;
  		}
  		else
  		{
  			if(b>n)
  			{
  				deb(-1)
  				reto;
  			}
  			x=three.front();
  			three.pop();
  			ans.pb({i,x});
  			ans.pb({i,x+1});
  			three.push(x+1);
  			b++;
  		}
  	}
  	if(d==2)
  	{
  		if(three.empty())
  		{
  			if(b>n)
  			{
  				deb(-1)
  				reto;
  			}
  			ans.pb({i,b});
  			two.push(b);
  			b++;
  		}
  		else
  		{
  			x=three.front();
  			three.pop();
  			ans.pb({i,x});
  			ans.pb({i,x+1});
  			two.push(x+1);
  		}
  	}
  	if(d==1)
  	{
  		if(two.empty())
  		{
  			if(three.empty())
  			{
  				if(b>n)
  				{
  					deb(-1)
  					return 0;
  				}
  				ans.pb({i,b});
  				b++;
  			}
  			else
  			{
  				x=three.front();
  				three.pop();
  				ans.pb({i,x});
  				ans.pb({i,x+1});
  			}
  		}
  		else
  		{
  			x=two.front();
  			two.pop();
  			ans.pb({i,x});
  		}
  	}
  	i++;
  }
  if(three.empty()&&two.empty())
  {
  	deb(ans.size())
  	for(auto x:ans)
	  	deB(x.ss,x.ff)
  }
  else
  	deb(-1)
}