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
 
bool a[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=2,j;
  vi v;
  a[1]=1;
  while(i<=100000)
  {
    if(a[i]==0)
    {
      v.pb(i);
      j=i*i;
      while(j<=100000)
      {
        a[j]=1;
        j+=i;
      }
    }
    i++;
  }
  ll t=1,n,x;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<v.size())
    {
      if(v[i]>n-1&&a[v[i]-n+1])
      {
        x=v[i]-n+1;
        break;
      }
      i++;
    }
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=n)
      {
        if(i==j)
          cout<<x<<" ";
        else
          cout<<"1 ";
        j++;
      }
      cout<<"\n";
      i++;
    }
  }
}