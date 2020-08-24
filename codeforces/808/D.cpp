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
#define N 100009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll a[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  ll i=1;
  cin>>n;
  while(i<=n)
    cin>>a[i++];
  i=n;
  multiset<ll> s,S;
  while(i)
  {
    f[i]=a[i]+f[i+1];
    s.insert(a[i]);
    i--;
  }
  ll sum=0;
  i=1;
  while(i<=n)
  {
    s.erase(s.find(a[i]));
    S.insert(a[i]);
    sum+=a[i];
    if(sum==f[i+1])
    {
      YES
      return 0;
    }
    if(sum<f[i+1])
    {
      if((f[i+1]-sum)%2==0&&s.find((f[i+1]-sum)/2)!=s.end())
      {
        YES
        return 0;
      }
    }
    else
    {
     if((-f[i+1]+sum)%2==0&&S.find((-f[i+1]+sum)/2)!=S.end())
      {
        YES
        return 0;
      } 
    }
    i++;
  }
  NO
  return 0;
}