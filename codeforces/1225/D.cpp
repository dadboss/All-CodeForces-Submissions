#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb insert
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

ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k;
  cin>>n>>k;
  ll i=2,j;
  while(i<=N)
  {
    if(a[i]==0)
    {
      j=i;
      while(j<=N)
      {
        a[j]=i;
        j+=i;
      }
    }
    i++;
  }
  i=0;
  ll ans=0,x,ct,d;
  map<set<pi>,ll> m;
  while(i<n)
  {
    cin>>d;
    set<pi> p,q;
    while(d>1)
      {
        x=a[d];
        ct=0;
        while(d%x==0)
        {
          ct++;
          d/=x;
        }
        if(ct%k)
          {
            p.pb({x,ct%k});
            q.pb({x,(k-ct%k)%k});
          }
      }
      if(m.find(q)!=m.end())
        {
         // YES
          ans+=m[q];
        }
      m[p]++;
      i++;
  }
  deb(ans)
}