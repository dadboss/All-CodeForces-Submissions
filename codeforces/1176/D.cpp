#include<bits/stdc++.h>
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
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
multiset<ll> s;
ll ind[3000009];
ll a[3000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll ct=1;
  ll i=2,j;
  while(i<=3000000)
  {
    if(a[i]==0)
      {
        ind[i]=ct;
        ct++;
        j=i*i;
        while(j<=3000000)
        {
          if(a[j]==0)
            a[j]=i;
          j+=i;
        }
      }
      i++;
  }
  ll n,d;
  cin>>n;
  n+=n;
  while(n--)
  {
    cin>>d;
    s.insert(d);
  }
  vi ans;
  while(!s.empty())
  {
    d=*s.rbegin();
    s.erase(s.find(d));
    if(a[d]==0)
    {
      ans.pb(ind[d]);
      s.erase(s.find(ind[d]));
    }
    else
    {
      ans.pb(d);
      s.erase(s.find(d/a[d]));
    }
    //break;
  }
  for(auto x:ans)
    cout<<x<<" ";
}         