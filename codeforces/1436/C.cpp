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
#define p mod
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 
ll fac[1000010+10];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    fac[0] = 1; 
    for (ll i=1 ; i<1000010; i++) 
        fac[i] = fac[i-1]*i%p;
  ll n,x,pos;
  cin>>n>>x>>pos;
  ll l=0,r=n,less=x-1,g=n-x,ans=1,mid;
  while(l<r)
  {
    mid=(l+r)/2;
    if(mid==pos)
    {
      l=mid+1;
    }
    else if(mid<pos)
    {
      ans*=less;
      less--;
      ans%=mod;
      l=mid+1;
    }
    else
    {
      ans*=g;
      ans%=mod;
      g--;
      r=mid;
    }
    //Deb(l,r,ans)
  }
  deb((ans*fac[less+g])%mod)
}