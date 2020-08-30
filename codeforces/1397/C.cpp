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

ll a[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k;
  cin>>n;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  if(n==1)
  {
    deB(1,1)
    deb(-a[0]);
    a[i]=0;
    deB(1,1)
    deb(-a[i]);
    deB(1,1)
    deb(-a[i]);
    return 0;
  }
  deB(1,n)
  ll x=n-1;
  i=0;
  while(i<n)
  {
    if(a[i]%n==0)
    {
      cout<<-(a[i])<<" ";
      a[i]=0;
    }
    else
    {
      if(a[i]>0)
      {
        k=a[i]%(n-1);
        cout<<-(k*n)<<" ";
        a[i]-=k*n;
      }
    else
      {
        k=a[i]%(n-1);
        cout<<-k*n<<" ";
        a[i]-=k*n;
      } 
    }
    i++;
  }
  cout<<"\n";
  deB(1,n-1)
  i=0;
  while(i<n-1)
  {
    cout<<-a[i]<<" ";
    i++;
  }
  cout<<"\n";
  deB(n,n)
  deb(-a[n-1])
}