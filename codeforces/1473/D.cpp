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
string s;
struct node
{
	ll val,mn,mx;
};
node t[4*N];
node merge(node a,node b)
{
	a.mn=min(a.mn,a.val+b.mn);
	a.mx=max(a.mx,a.val+b.mx);
	a.val+=b.val;
	return a;
}
void build( ll v, ll tl, ll tr) {
    if (tl == tr) {
    	if(s[tl]=='+')
    	{
    		t[v].val=1;
    		t[v].mx=1;
    		t[v].mn=0;
    	}
    	else
    	{
    		t[v].val=-1;
    		t[v].mx=0;
    		t[v].mn=-1;
    	}
    } else {
        ll tm = (tl + tr) / 2;
        build(v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        //t[v] = t[v*2] + t[v*2+1];
        t[v]=merge(t[2*v],t[2*v+1]);
    }
}
node sum(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) 
        return {0,0,0};
    if (l == tl && r == tr) {
        return t[v];
    }
    ll tm = (tl + tr) / 2;
    return merge(sum(v*2, tl, tm, l, min(r, tm)),sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,q,l,r;
  cin>>t;
  node rew;
  while(t--)
  {
 	cin>>n>>q>>s;
 	s='!'+s;
 	build(1,1,n);
 	while(q--)
 	{
 		cin>>l>>r;
 		rew=merge(sum(1,1,n,1,l-1),sum(1,1,n,r+1,n));
 		deb(rew.mx-rew.mn+1);
 	}   
  }
}