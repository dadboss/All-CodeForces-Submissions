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
ll a[N];
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
void f(ll i,ll j)
{
	if(i==j)
	{
		if(a[i]==0)
		{
			cout<<"? ";
			deb(i);
			cin>>a[i];
		}
		if(a[i+1]==0)
		{
			cout<<"? ";
			deb(i+1);
			cin>>a[i+1];	
		}
		if(a[i-1]==0)
		{
			cout<<"? ";
			deb(i-1);
			cin>>a[i-1];
		}
		if(a[i]<min(a[i-1],a[i+1]))
		{
			cout<<"! ";
			deb(i);
			exit(0);
		}
	}
	ll mid=(i+j)/2;
	if(a[mid]==0)
	{
		cout<<"? ";
		deb(mid);
		cin>>a[mid];
	}
	if(a[mid+1]==0)
	{
		cout<<"? ";
		deb(mid+1);
		cin>>a[mid+1];
	}
	if(a[mid-1]==0)
	{
		cout<<"? ";
		deb(mid-1);
		cin>>a[mid-1];
	}
	if(a[mid]<min(a[mid+1],a[mid-1]))
	{
		cout<<"! ";
		deb(mid);
		exit(0);
	}
	if(a[mid+1]<a[mid])
		f(mid+1,j);
	else 
		f(i,mid-1);
}
int main()
{
  //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  /*#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif*/
  ll n;
  cin>>n;
  a[0]=a[n+1]=INT_MAX;
  f(1,n);
}