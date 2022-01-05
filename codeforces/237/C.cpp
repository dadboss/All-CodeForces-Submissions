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
ll a[4*N],f[4*N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=2,j;
  while(i<=1000000)
  {
    f[i]=f[i-1];
    if(a[i]==0)
    {
      f[i]++;
      j=i*i;
      while(j<=1000000)
      {
        a[j]=1;
        j+=i;
      }
    }
    i++;
  }
  ll l,r,k;
  cin>>l>>r>>k;
  ll ans=INT_MAX;
  ll s=1,e=r-l+1,m;
  while(s<=e)
  {
    m=(s+e)/2;
    i=l;
    while(i+m-1<=r)
    {
      if(f[i+m-1]-f[i-1]<k)
        break;
      i++;
    }
    if(i+m-1>r)
    {
      ans=m;
      e=m-1;
    }
    else
      s=m+1;
  }
  if(ans==INT_MAX)
    ans=-1;
  deb(ans)
}         