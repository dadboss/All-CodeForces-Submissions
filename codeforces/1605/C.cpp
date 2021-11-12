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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,i,ans,n;
  string s;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n>>s;
    i=1;
    ans=INT_MAX;
    while(i<n)
    {
      if(s[i]=='a'&&s[i-1]=='a')
      {
        ans=2;
        break;
      }
      i++;
    }
    i=1;
    while(i+1<n)
    {
      if(s[i-1]=='a'&&s[i+1]=='a')
        ans=min(ans,3ll);
      i++;
    }
    i=0;
    while(i+3<n)
    {
      if(s[i]=='a'&&s[i+3]=='a'&&s[i+1]!=s[i+2])
        ans=min(ans,4ll);
      i++;
    }
    i=0;
    while(i+6<n)
    {
      if(s[i]=='a'&&s[i+6]=='a'&&s[i+3]=='a'&&s[i+1]==s[i+2]&&s[i+4]==s[i+5]&&s[i+1]!=s[i+4])
        ans=min(ans,7ll);
      i++;
    }
    if(ans==INT_MAX)
      ans=-1;
    deb(ans)
  }
}         