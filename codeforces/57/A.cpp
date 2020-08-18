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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;


int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    ll n,x1,y1,x2,y2,val1,val2;
    cin>>n>>x1>>y1>>x2>>y2;
    if(x1==0) 
      val1=y1;
    else if(x1==n) 
      val1=3*n-y1;
    else if(y1==0) 
      val1=4*n-x1;
    else if(y1==n) 
      val1=n+x1;
    if(x2==0) 
      val2=y2;
    else if(x2==n) 
      val2=3*n-y2;
    else if(y2==0) 
      val2=4*n-x2;
    else if(y2==n) 
      val2=n+x2;
    deb( min(abs(val1-val2),4*n-abs(val1-val2)));
}