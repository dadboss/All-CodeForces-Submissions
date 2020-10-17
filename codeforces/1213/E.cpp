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
  string a,b;
  ll n;
  bool f;
  string t;
  cin>>n>>a>>b;
  string s="abc";
  do
  {
  	t=a;
  	f=0;
  	if((t[0]==s[0]&&t[1]==s[1])||(t[0]==s[1]&&t[1]==s[2])||(n>1&&t[0]==s[2]&&t[1]==s[0]))
	  	f=1;
	t=b;
	if((t[0]==s[0]&&t[1]==s[1])||(t[0]==s[1]&&t[1]==s[2])||(n>1&&t[0]==s[2]&&t[1]==s[0]))
	  	f=1;
	 if(f==0)
	 {
	 	YES
	 	while(n--)
	 		cout<<s;
	 	return 0;
	 }
  }while(next_permutation(all(s)));
  YES
  ll i;
  if(a[0]==b[0])
  {
  	char ch='a';
  	while(ch<'d')
  	{
  		if(a[0]!=ch)
  		{
  			i=n;
  			while(i--)
  				cout<<ch;
  		}
  		ch++;
  	}
  	i=n;
  	while(i--)
  		cout<<a[0];
  	return 0;
  }
  else if(a[1]==b[1])
  {
	  i=n;
	  while(i--)
	  	cout<<a[1];
	  char ch='a';
	  	while(ch<'d')
	  	{
	  		if(a[1]!=ch)
	  		{
	  			i=n;
	  			while(i--)
	  				cout<<ch;
	  		}
	  		ch++;
	  	}
	  return 0;
   }
   i=n;
   while(i--)
   	cout<<a[0];
   char ch='a';
   while(1)
   {
   		if(ch!=a[0]&&ch!=a[1])
   		{
   			i=n;
   			while(i--)
   				cout<<ch;
   			break;
   		}
   		ch++;
   }
   i=n;
   while(i--)
   		cout<<a[1];
}