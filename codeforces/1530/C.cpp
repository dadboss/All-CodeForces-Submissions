#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define N 200009
ll a[N],b[N],p[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,i,x,n,sum,mus,j,ans;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<n)
      cin>>a[i++];
    i=0;
    while(i<n)
      cin>>b[i++];
    sort(a,a+n);
    sort(b,b+n);
    i=n/4;
    sum=mus=0;
    while(i<n)
    {
      sum+=a[i];
      mus+=b[i];
      i++;
    }
    p[0]=b[0];
    i=1;
    while(i<n)
    {
      p[i]=b[i]+p[i-1];
      i++;
    }
    if(sum>=mus)
    {
      deb(0)
      cont;
    }
    j=n/4;
    i=n+1;
    ans=1;
    while(j<n)
    {
      sum+=100;
      if(i/4>j)
        sum-=a[j],j++;
      x=i-i/4;
        if(x>=n)
          mus=p[n-1];
        else
          mus=p[n-1]-p[n-x-1];
      //Deb(i,sum,mus)
      if(sum>=mus)
      {
        sum=-1;
        deb(ans)
        break;
      }
      ans++;
      i++;
    }
  }
}    