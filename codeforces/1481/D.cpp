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
#define N 1009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s[N];
ll outa[N],outb[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,tt=0,kop=0,n,m,i,j,k,f=0;
  cin>>t;
  if(t==320)
  	f=1;
  while(t--)
  {
  	tt++;
 	cin>>n>>m;
 	i=1;
 	while(i<=n)
 	{
 		cin>>s[i];
 		s[i]='!'+s[i];
 		outa[i]=outb[i]=0;
 		i++;
 	}   
 	i=1;
 	while(i<=n)
 	{
 		j=i+1;
 		while(j<=n)
 		{
 			if(s[i][j]==s[j][i])
 				break;
 			j++;
 		}
 		if(j!=n+1)
 			break;
 		i++;
 	}
 	if(i!=n+1)
 	{
 		YES
 		n=0;
 		while(n<=m)
 		{
 			if(n%2)
 				cout<<i<<" ";
 			else
 				cout<<j<<" ";
 			n++;
 		}
 		cout<<"\n";
 		cont;
 	}
 	if(m%2)
 	{
 		YES
 		n=0;
 		while(n<=m)
 		{
 			if(n%2)
 				cout<<"1 ";
 			else
 				cout<<"2 ";
 			n++;
 		}
 		cout<<"\n";
 		cont;
 	}
 	i=1;
 	while(i<=n)
 	{
 		j=1;
 		while(j<=n)
 		{
 			if(s[i][j]=='a')
 				outa[i]=j;
 			else if(s[i][j]=='b')
 				outb[i]=j;
 			j++;
 		}
 		i++;
 	}
 	i=1;
 	while(i<=n)
 	{
 		j=1;
 		while(j<=n)
 		{
 			if(s[i][j]=='a'&&outa[j])
 				{k=outa[j];break;}
 			if(s[i][j]=='b'&&outb[j])
 				{k=outb[j];break;}
 			j++;
 		}
 		if(j!=n+1)
 			break;
 		i++;
 	}
 	if(i==n+1)
 	{
 		NO
 		cont;
 	}
 	YES
 	//Deb(i,j,k)
 	if(m%4)
 	{
 		n=0;
 		while(n<=m)
 		{
 			if(n%2)
 				cout<<j<<" ";
 			else if(n/2%2)
 				cout<<k<<" ";
 			else cout<<i<<" ";
 			n++;
 		}
 		cout<<"\n";
 		cont;
 	}
 	n=0;
 	while(n<=m)
 	{
 		if(n%2==0)
 			cout<<j<<" ";
 		else if(n/2%2)
 			cout<<k<<" ";
 		else cout<<i<<" ";
 		n++;
 	}
 	cout<<"\n";
 	
  }
}