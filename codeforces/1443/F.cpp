#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
 
ll a[N],b[N],ind[N],f[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,k,i,ans,p;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    i=0;
    while(i<n)
    {
      cin>>a[i];
      ind[a[i]]=i;
      f[a[i]]=1;
      i++;
    }
    //p=2;
    //deB(f[a[p-1]],f[a[p+1]])
    i=0;
    while(i<k)
    {
      cin>>b[i];
      f[b[i]]=0;
      i++;
    }
    i=0;
    ans=1;
    while(i<k)
    {
      p=ind[b[i]];
      //deB(f[a[p-1]],f[a[p+1]])
      if(p&&f[a[p-1]]&&p<n-1&&f[a[p+1]])
      {
        ans*=2;
        ans%=md;
      }
      else if((p==0||f[a[p-1]]==0)&&(p==n-1||f[a[p+1]]==0))
      {
        ans=0;
        break;
      }
      f[b[i]]=1;
      i++;
    }
    deb(ans)
  }
}