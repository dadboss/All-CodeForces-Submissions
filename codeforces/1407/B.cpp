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
#define N 1009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,n,g,mg,k;
  cin>>t;
  while(t--)
  {
    cin>>n;
    bool v[n+1]={};
    i=j=0;
    v[0]=1;
    while(i<n)
    {
      cin>>a[i];
      if(a[i]>a[j])
      {
        v[j]=0;
        v[i]=1;
        j=i;
      }
      i++;
    }
    cout<<a[j]<<" ";
    g=a[j];
    k=n-1;
    while(k--)
    {
      i=0;
      mg=-1;
      while(i<n)
      {
        if(v[i]==0)
        {
          if(__gcd(g,a[i])>mg)
          {
            mg=__gcd(g,a[i]);
            j=i;
          }
        }
        i++;
      }
      g=mg;
      cout<<a[j]<<" ";
      v[j]=1;
    }
    cout<<"\n";
  }
}