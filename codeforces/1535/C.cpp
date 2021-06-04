#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define debb(x,y) cout<<x<<" "<<y<<"\n";
#define debbb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
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
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,j,ans,odd1,odd0,ev1,ev0;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	i=j=odd1=ev1=odd0=ev0=0;
  	ans=0;
  	while(i<s.size())
  	{
  		if(s[i]=='1')
  		{
  			if(i%2)
  				odd1++;
  			else
  				ev1++;
  		}
  		else if(s[i]=='0')
  		{
  			if(i%2)
  				odd0++;
  			else
  				ev0++;
  		}
  		while(min(odd1,ev1)!=0||min(odd0,ev0)!=0||min(odd1,odd0)!=0||min(ev1,ev0)!=0)
  		{
  			if(s[j]=='1')
  			{
  				if(j%2)
  					odd1--;
  				else
  					ev1--;
  			}
  			else if(s[j]=='0')
  			{
  				if(j%2)
  					odd0--;
  				else
  					ev0--;
  			}
  			j++;
  		}
  		ans+=i-j+1;
  		//debb(i,ans)
  		i++;
  	}
  	deb(ans)
  }
}