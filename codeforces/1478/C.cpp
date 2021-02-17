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
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,i,sum,x,y;
  cin>>t;
  while(t--)
  {
  	//deb(t)
   	cin>>n;
   	i=0;
   	map<ll,ll> m;
   	while(i<2*n)
   	{
   		cin>>a[i];
   		m[a[i]]++;
   		i++;
   	}
   	for(auto x:m)
   	{
   		if(x.ss!=2)
   		{
   			NO
   			i=-1;
   			break;
   		}
   	}
   	if(i==-1)
   		cont;
   	sort(a,a+2*n);
   	i=2*n-1;
   	sum=0;
   	while(i>-1)
   	{
   		x=a[i]-sum;
   		y=x/(i+1);
   		if(x%(i+1)||y<1)
   		{
   			NO
   			break;
   		}
   		sum+=y+y;
   		//deb(y)
   		i-=2;
   	}
   	if(i>-1)
   		cont;
   	YES
  }
}