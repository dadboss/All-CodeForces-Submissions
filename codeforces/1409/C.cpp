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
  ll t,n,x,y,d,i,rem,mx,ans,MX,diff;
  cin>>t;
  while(t--)
  {
    cin>>n>>x>>y;
    ans=LLONG_MAX;
    d=y-x;
    i=1;
    vi v;
    while(i*i<=d)
    {
      if(d%i==0)
        {
          v.pb(i);
          if(i*i!=d)
            v.pb(d/i);
        }
      i++;
    }
    for(auto s:v)
    {
      rem=d/s-1;
      if(rem+2>n)
        cont;
      //deB(s,rem)
      rem=n-2-rem;
      //deb(rem)
      rem=max(0ll,rem-(x-1)/s);
      mx=y+s*rem;
      if(mx<ans)
      {
        ans=mx;
        MX=mx;
        diff=s;
      }
    }
    i=0;
    while(i<n)
    {
      cout<<MX-i*diff<<" ";
      i++;
    }
    cout<<"\n";
  }
}