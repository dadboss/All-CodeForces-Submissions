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
  ll t=1,i,d,w,n,f,sum;
  cin>>t;
  while(t--)
  {
  	vpi v;
  	cin>>n>>w;
  	i=1;
  	f=sum=0;
  	while(i<=n)
  		{
  			cin>>d;
  			if(d>=(w+1)/2&&d<=w)
  					f=i;
  			if(d<(w+1)/2)
  				{
  					v.pb({d,i});
  					sum+=d;
  				}
  			i++;
  		}
  	if(f)
  	{
  		deb(1);
  		deb(f);
  		cont;
  	}
  	if(sum<(w+1)/2)
  	{
  		deb(-1)
  		cont;
  	}
  	vi ans;
  	sort(all(v));
  	sum=0;
  	i=v.size()-1;
  	while(1)
  	{
  		sum+=v[i].ff;
  		ans.pb(v[i].ss);
  		if(sum>=(w+1)/2)
  			break;
  		i--;
  	}
  	deb(ans.size())
  	for(auto x:ans)
  		cout<<x<<" ";
  	cout<<"\n";
  }
}