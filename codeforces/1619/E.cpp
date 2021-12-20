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
vi sur;
ll f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,d,prev;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=0;
    while(i<=n)
    {
      f[i]=0;
      i++;
    }
    i=0;
    while(i<n)
    {
      cin>>d;
      f[d]++;
      i++;
    }
    d=0;
    i=0;
    sur.clear();
    prev=0;
    while(i<=n)
    {
      if(d)
        cout<<"-1 ";
      else
        cout<<prev+f[i]<<" ";
      while(f[i]>1)
        sur.pb(i),f[i]--;
      if(f[i]==0&&sur.empty())
        d=1;
      else if(f[i]==0)
        prev+=i-sur.back(),sur.pop_back();
      i++;
    }
    cout<<"\n";
  }
}         