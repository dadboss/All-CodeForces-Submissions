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
pi a[N];
ll f[N],m[N];
bool cmp(pi a,pi d)
{
  return a.ff>d.ff; 
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i].ff;
    m[a[i].ff]++;
    i++;
  }
  ll sum,j,tot,ex,rem,x;
  i=1;
  while(i<=n)
  {
    cin>>a[i].ss;
    f[a[i].ss]++;
    i++;
  }
  sort(a+1,a+n+1,cmp);
  ll ans=1e15;
  i=1;
  ll prev=0;
  while(i<=n)
  {
    j=i;
    tot=0;
    while(j<i+m[a[i].ff])
    {
      f[a[j].ss]--;
      tot+=a[j].ss;
      j++;
    }
    rem=n-i+1;
    ex=rem-(2*m[a[i].ff]-1);
    sum=0;
    j=1;
    while(ex>0)
    {
      while(f[j]==0)
        j++;
      x=min(ex,f[j]);
      ex-=x;
      sum+=x*j;
      j++;
    }
    ans=min(ans,prev+sum);
    prev+=tot;
    i+=m[a[i].ff];
  }
  deb(ans)
}         