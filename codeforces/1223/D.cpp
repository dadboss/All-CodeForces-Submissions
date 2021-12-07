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
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,ans,ct,tot,i;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=1;
    map<ll,ll> mn,mx;
    while(i<=n)
    {
      cin>>a[i];
      if(mn.find(a[i])==mn.end())
        mn[a[i]]=i;
      if(mx.find(a[i])==mx.end())
        mx[a[i]]=i;
      mn[a[i]]=min(mn[a[i]],i);
      mx[a[i]]=max(mx[a[i]],i);
      i++;
    }
    sort(a+1,a+n+1);
    ans=1;
    ct=1;
    tot=1;
    i=2;
    while(i<=n)
    {
      if(a[i]!=a[i-1])
      {
        tot++;
        if(mn[a[i]]>mx[a[i-1]])
          ct++;
        else
          ct=1;
        ans=max(ans,ct);
      }
      i++;
    }
    deb(tot-ans)
  }
}         