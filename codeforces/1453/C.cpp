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
#define N 2003
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
string s[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,d,n,i,j,k,l;
  cin>>t;
  while(t--)
  {
 	cin>>n;
 	i=1;
 	while(i<=n)
 		{
 			cin>>s[i];
 			s[i]='!'+s[i];
 			i++;
 		}
 	ll rmn[10],cmn[10];
 	ll rmx[10]={},cmx[10]={};
 	i=0;
 	while(i<10)
 	{
 		rmn[i]=cmn[i]=3000;
 		i++;
 	}
 	i=1;
 	while(i<=n)
 	{
 		j=1;
 		while(j<=n)
 		{
 			rmn[s[i][j]-'0']=min(rmn[s[i][j]-'0'],j);
 			cmn[s[i][j]-'0']=min(cmn[s[i][j]-'0'],i);
 			rmx[s[i][j]-'0']=max(rmx[s[i][j]-'0'],j);
 			cmx[s[i][j]-'0']=max(cmx[s[i][j]-'0'],i);
 			j++;
 		}
 		i++;
 	}
 	ll ans[10]={};
 	d=0;
 	while(d<10)
 	{
 		i=1;
 		while(i<=n)
 		{
 			j=1;
 			while(j<=n&&s[i][j]-'0'!=d)
 				j++;
 			if(j!=n+1)
 			{
 				k=n;
 				while(k&&s[i][k]-'0'!=d)
 					k--;
 				if(k){
 				ans[d]=max(ans[d],(k-j)*max(i-1,n-i));

 					//deb(ans[2])
 				if(cmn[d]!=3000)
 					{
 						ans[d]=max(ans[d],max(k-1,n-k)*(i-cmn[d]));
 						ans[d]=max(ans[d],max(j-1,n-j)*(i-cmn[d]));
 					}
 				if(cmx[d])
 				{
 					ans[d]=max(ans[d],(cmx[d]-i)*max(max(k-1,n-k),max(j-1,n-j)));
 					//max(k-1,n-k)*max(i-cmn[d]+1,cmx[d]-i+1),max(j-1,n-j)*max(i-cmn[d]+1,cmx[d]-i+1)});
 				}
 			}
 			}
 			i++;
 		}
 		j=1;
 		while(j<=n)
 		{
 			i=1;
 			while(i<=n&&s[i][j]-'0'!=d)
 				i++;
 			if(i!=n+1)
 			{
 				k=n;
 				while(k&&s[k][j]-'0'!=d)
 					k--;
 				if(k)
 				{
 					ans[d]=max(ans[d],(k-i)*max(j-1,n-j));
 					if(rmn[d]!=3000)
 						ans[d]=max(ans[d],(j-rmn[d])*max(max(k-1,n-k),max(i-1,n-i)));
 					if(rmx[d])
 						ans[d]=max(ans[d],(rmx[d]-j)*max(max(k-1,n-k),max(i-1,n-i)));
 				}
 				//ans[d]=max({ans[d],(k-i+1)*max(j-1,n-j),max(i-1,n-1)*max(j-rmn[d]+1,cmn[d]-j+1),max(k-1,n-k)*max(j-rmn[d]+1,cmn[d]-j+1)});
 			}
 			j++;
 		}
 		d++;
 	}
 	i=0;
 	while(i<10)
 	{
 		cout<<ans[i]<<" ";
 		i++;
 	}
 	cout<<"\n";
  }
}