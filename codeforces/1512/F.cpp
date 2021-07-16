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
ll a[N],b[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,n,c,i,sum,ex,diff,ans,d;
  cin>>t;
  while(t--)
  {
      cin>>n>>c;
      i=1;
      while(i<=n)
        cin>>a[i++];
      i=1;
      while(i<n)
        cin>>b[i++];
      i=1;
      ans=LLONG_MAX;
      d=sum=0;
      while(1)
      {
        if(sum>=c)
            break;
        ans=min(ans,d+(c-sum+a[i]-1)/a[i]);
        //deB(i,ans)
        if(i==n)
            break;
        if(sum>=b[i])
        {
            d++;
            sum-=b[i];
        }
        else
        {
            diff=b[i]-sum;
            ex=(diff+a[i]-1)/a[i];
            d+=ex+1;
            sum+=a[i]*ex;
            sum-=b[i];
        }
        i++;
      }
      deb(ans)
  }
}        