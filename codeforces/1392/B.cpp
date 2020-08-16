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

ll a[N],b[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,mx,xm,k,n;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    i=0;
    mx=LLONG_MIN;
    while(i<n)
    {
      cin>>a[i];
      mx=max(mx,a[i]);
      i++;
    }
    i=0;
    xm=LLONG_MIN;
    while(i<n)
    {
      b[i]=mx-a[i];
      xm=max(xm,b[i]);
      i++;
    }
    if(k%2)
    {
      i=0;
      while(i<n)
      {
        cout<<b[i]<<" ";
        i++;
      }
      cout<<"\n";
    }
    else
    {
      i=0;
      while(i<n)
      {
        cout<<xm-b[i]<<" ";
        i++;
      }
      cout<<"\n";
    }
  }
}