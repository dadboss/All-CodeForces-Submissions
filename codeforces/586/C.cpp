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
#define N 4009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll v[N],d[N],p[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>v[i]>>d[i]>>p[i];
    i++;
  }
  vi ans;
  ll sum,j,x;
  i=0;
  while(i<n)
  {
    if(f[i]==0)
    {
      ans.pb(i+1);
      j=i+1;
      x=v[i];
      sum=0;
      while(j<n)
      {
        if(f[j]==0)
        {
          p[j]-=(sum+x);
          x--;
          x=max(x,0ll);
          if(p[j]<0)
          {
            f[j]=1;
            sum+=d[j];
          }
        }
        j++;
      }
    }
    i++;
  }
  deb(ans.size())
  for(auto x:ans)
    cout<<x<<" ";
}