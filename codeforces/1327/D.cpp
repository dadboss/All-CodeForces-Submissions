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
ll a[N],c[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,ans,i,j,n,k,g;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=1;
  	while(i<=n)
  		{	
  			f[i]=0;
  			cin>>a[i++];
  		}
  	i=1;
  	while(i<=n)
  		cin>>c[i++];
  	i=1;
  	ans=n;
  	vector<vi> vec;
  	while(i<=n)
  	{
  		if(f[i]==0)
  		{
  			f[i]=1;
  			vi v;
  			v.pb(i);
  			j=a[i];
  			while(j!=i)
  			{
  				f[j]=1;
  				v.pb(j);
  				j=a[j];
  			}
  			vec.pb(v);
  			ans=min(ans,(ll)v.size());
  		}
  		i++;
  	}
  	for(auto v:vec)
  	{
  		i=1;
  		while(i*i<=v.size())
  		{
  			if(v.size()%i==0)
  			{
  				j=0;
  				while(j<i)
  				{	
  					k=(j+i)%v.size();
  					while(k!=j)
  					{
  						if(c[v[j]]!=c[v[k]])
  							break;
  						k+=i;
  						k%=v.size();
  					}
  					if(k==j)
  						ans=min(ans,i);
  					j++;
  				}
  				g=i;
  				i=v.size()/i;
  				j=0;
  				while(j<i)
  				{	
  					k=(j+i)%v.size();
  					while(k!=j)
  					{
  						if(c[v[j]]!=c[v[k]])
  							break;
  						k+=i;
  						k%=v.size();
  					}
  					if(k==j)
  						ans=min(ans,i);
  					j++;
  				}
  				i=g;
  			}
  			i++;
  		}
  	}
  	deb(ans)
  }
}