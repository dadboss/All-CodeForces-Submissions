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
  ll t=1,n,m,sum,mx,mn,neg,ct,d,i;
  cin>>t;
  while(t--)
  {
  	cin>>n>>m;
  	i=n*m;
  	ct=neg=sum=0;
  	mx=INT_MAX;
  	mn=LLONG_MIN;
  	while(i--)
  	{
  		cin>>d;
  		sum+=abs(d);
  		if(d<0)
  			{
  				neg++;
  				mn=max(mn,d);
  			}
  		else if(d==0)
  			ct++;
  		else
  			{
  				mx=min(mx,d);
  			}
  	}
  	if(neg%2==0)
  		deb(sum)
  	else
  	{
  		if(ct)
  			deb(sum)
  		else
  			deb(sum-2*(min(mx,-mn)));
  	}
  }
}