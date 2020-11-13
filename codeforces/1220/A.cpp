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
 
ll a[5];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll n;
  string s;
  cin>>n>>s;
  for(auto x:s)
  {
  	if(x=='z')
  		a[0]++;
  	if(x=='e')
  		a[1]++;
  	if(x=='r')
  		a[2]++;
  	if(x=='o')
  		a[3]++;
  	if(x=='n')
  		a[4]++;
  }
  while(1)
  {
  	if(min({a[1],a[3],a[4]}))
  	{
  		cout<<"1 ";
  		a[1]--;
  		a[3]--;
  		a[4]--;
  	}
  	else if(min({a[0],a[1],a[2],a[3]}))
  	{
  		cout<<"0 ";

  		a[1]--;
  		a[3]--;
  		a[2]--;
  		a[0]--;
  	}
  	else
  		break;
  }
}