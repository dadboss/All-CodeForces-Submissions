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
ll l[N],r[N],v[N],a[N],p[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  p[0]=1;
  ll i=1;
  while(i<=200009)
  {
    p[i]=p[i-1]+p[i-1];
    p[i]%=mod;
    i++;
  }
  ll T,tt=1,n,m,ans,sum,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>m;
    i=0;
    while(i<m)
    {
      cin>>l[i]>>r[i]>>v[i];
      i++;
    }
    i=ans=0;
    while(i<31)
    {
      j=1;
      while(j<=n+1)
      {
        a[j]=0;
        j++;
      }
      j=0;
      while(j<m)
      {
        if(v[j]&(1ll<<i))
        {

        }
        else
        {
          a[l[j]]++;
          a[r[j]+1]--;
        }
        j++;
      }
      sum=0;
      j=1;
      while(j<=n)
      {
        a[j]+=a[j-1];
        if(a[j]==0)
          sum++;
        j++;
      }
      ans+=(((1ll<<i)*p[sum-1])%mod)*p[n-sum];
      ans%=mod;
      i++;
    }
    deb(ans)
  }
}         