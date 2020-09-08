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
#define N 300009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

vector<pair<ll,pi>> v;
ll dp[N],temp[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,l,r,w,j,k;
  pi y;
  cin>>n>>m;
  while(m--)
  {
    cin>>l>>r>>w;
    v.pb({w,{l,r}});
  }
  sort(all(v));
  ll ans=0;
  ll i=0;
  while(i<v.size())
  {
    //deB(x.ss.ff,x.ss.ss)
    j=i+1;
    while(j<v.size()&&(v[j].ff==v[i].ff))
      {
        j++;
        //deB(v[j].ff,v[i].ff)
      }
    k=i;
    while(k<j)
    {
      temp[v[k].ss.ss]=max(temp[v[k].ss.ss],dp[v[k].ss.ff]+1);
      k++;
    }
    k=i;
    while(k<j)
    {
      dp[v[k].ss.ss]=max(dp[v[k].ss.ss],temp[v[k].ss.ss]);
      ans=max(ans,dp[v[k].ss.ss]);
      k++;
    }
    i=j;
  }
  deb(ans)
}