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
ll msp[N],nsp[N],mxp[N],val[N],mnp[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,q,l,r,i,x,num,y,z;
  string s;
  cin>>t;
  while(t--)
  {
  	cin>>n>>q>>s;
  	s='!'+s;
  	i=1;
  	num=0;
  	while(i<=n)
  	{
  		if(s[i]=='+')
  			num++;
  		else
  			num--;
  		val[i]=num;
  		mxp[i]=max(mxp[i-1],num);
  		mnp[i]=min(mnp[i-1],num);
  		i++;
  	}
  	msp[i]=INT_MIN;
  	nsp[i]=INT_MAX;
  	i=n;
  	while(i)
  	{
  		msp[i]=max(msp[i+1],val[i]);
  		nsp[i]=min(nsp[i+1],val[i]);
  		i--;
  	}
  	pi a[2];
  	while(q--)
  	{
  		cin>>l>>r;
  		x=val[r]-val[l-1];
  		y=msp[r+1]-x;
  		z=nsp[r+1]-x;
		if(r==n)
			y=z=0;
		else
		{
			y=msp[r+1]-x;
			z=nsp[r+1]-x;
		}
		//debb(y,z)
  		deb(max(y,mxp[l-1])-min(z,mnp[l-1])+1)
  	}
  }
}