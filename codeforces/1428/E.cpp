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
  ll n,k,d,x,y;
  cin>>n>>k;
  k-=n;
  multiset<pair<ll,pi>> s;
  ll sum=0,ans=0;
  while(n--)
  {
  	cin>>d;
  	sum+=d*d;
  	x=d/2;
  	y=d%2;
  	s.insert({d*d-((2-y)*x*x+y*(x+1)*(x+1)),{3,d}});
   // deb(d*d-((2-y)*x*x+y*(x+1)*(x+1)))
  }
  ll p,val;
  while(k--)
  {
  	auto it=*s.rbegin();
  	s.erase(s.find(it));
  	ans+=it.ff;
    //deb(it.ff)
  	d=it.ss.ss;
  	p=it.ss.ff;
    p--;
  	x=d/p;
  	y=d%p;
    val=(p-y)*x*x+y*(x+1)*(x+1);
    p++;
    x=d/p;
    y=d%p;
  	s.insert({val-((p-y)*x*x+y*(x+1)*(x+1)),{p+1,d}});
  }
  deb(sum-ans);
}