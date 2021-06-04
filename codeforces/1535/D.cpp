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
#define N 262150
ll t[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll k;
  cin>>k;
  string s;
  cin>>s;
  string temp=s;

  reverse(all(s));
  s='!'+s;
  ll n=s.size();
  ll i=n-1;
  while(i>=n/2)
  {
  	if(s[i]=='?')
  		t[i]=2;
  	else
  		t[i]=1;
  	i--;
  }
  while(i)
  {
  	if(s[i]=='?')
  		t[i]=t[2*i]+t[2*i+1];
  	else if(s[i]=='0')
  		t[i]=t[2*i+1];
  	else
  		t[i]=t[2*i];
  	i--;
  }
  ll x;
  cin>>x;
  char ch;
  while(x--)
  {
  	cin>>i>>ch;
  	i=n-i;
  	s[i]=ch;
  	if(i>=n/2)
  	{
  		if(s[i]=='?')
  			t[i]=2;
  		else
  			t[i]=1;
  		i/=2;
  	}
  	while(i)
  	{
  		if(s[i]=='?')
  			t[i]=t[2*i]+t[2*i+1];
  		else if(s[i]=='0')
  			t[i]=t[2*i+1];
  		else
  			t[i]=t[2*i];
  		i/=2;
  	}
  	/*i=1;
  while(i<n)
  {
  	debb(i,t[i])
  	i++;
  }*/
  	deb(t[1])
  }
}