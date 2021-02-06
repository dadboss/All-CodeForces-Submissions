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
#define N 100009
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,m,i,d,x;
  cin>>t;
  while(t--)
  {
 	cin>>n>>m;
 	set<ll> s[n+10];
 	ll a[n+10],b[n+10],ans[m+10],col[n+10]={};
 	i=1;
 	while(i<=n)
 		cin>>a[i++];
 	i=1;
 	while(i<=n)
 	{
 		cin>>b[i];
 		if(b[i]!=a[i])
 		{
 			s[b[i]].insert(i);
 		}
 		col[b[i]]=i;
 		i++;
 	}   
 	i=1;
 	queue<ll> st;
 	while(i<=m)
 	{
 		cin>>d;
 		if(col[d]==0)
 				st.push(i);
 		else
 		{
 			if(st.empty())
 			{
 				if(s[d].empty())
 					ans[i]=col[d];
 				else
 				{
 					ans[i]=*s[d].begin();
 					s[d].erase(s[d].begin());
 				}
 			}
 			else
 			{
 				if(s[d].empty())
 					ans[i]=col[d];
 				else
 				{
 					ans[i]=*s[d].begin();
 					s[d].erase(s[d].begin());
 				}	
 				while(!st.empty())
 				{
 					x=st.front();
 					ans[x]=ans[i];
 					st.pop();
 				}
 			}
 		}
 		i++;
 	}
 	if(st.empty())
 	{
 		i=1;
 		while(i<=n)
 		{
 			if(s[i].empty()==0)
 			{
 				NO
 				break;
 			}
 			i++;
 		}
 		if(i!=n+1)
 			cont;
 		YES
 		i=1;
 		while(i<=m)
 		{
 			cout<<ans[i]<<" ";
 			i++;
 		}
 		cout<<"\n";
 	}
 	else
 		NO
  }
}