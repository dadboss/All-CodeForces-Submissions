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
ll f[N][30];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,q,i,j,l,r,x,ans=0;
  string s;
  cin>>n>>q>>s;
  s='!'+s;
  i=1;
  while(i<s.size())
  {
    j=0;
    while(j<26)
    {
      f[i][j]=f[i-1][j];
      j++;
    }
    f[i][s[i]-'a']++;
    i++;
  }
  while(q--)
  {
    cin>>l>>r;
    ans=0;
    i=0;
    while(i<26)
    {
      x=f[r][i]-f[l-1][i];
      ans+=x*(i+1);
      i++;
    }
    deb(ans)
  }

}    