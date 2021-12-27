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
vpi v,q;
string s;
ll a[N],ans[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,num;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=1;
    while(i<=n)
      cin>>a[i++];
    cin>>s;
    s='!'+s;
    i=1;
    v.clear();
    q.clear();
    while(i<s.size())
    {
      if(s[i]=='1')
        v.pb({a[i],i});
      else
        q.pb({a[i],i});
      i++;
    }
    sort(all(v));
    sort(all(q));
    num=1;
    for(auto x:q)
    {
      ans[x.ss]=num;
      num++;
    }
    for(auto x:v)
    {
      ans[x.ss]=num;
      num++;
    }
    i=1;
    while(i<=n)
    {
      cout<<ans[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}         