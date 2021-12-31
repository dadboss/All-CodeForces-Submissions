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
  string s,ans;
  cin>>s;
  ll i=0,j=s.size()-2,a,b,c;
  while(i+1<j)
  {
    a=b=c=0;
    if(s[i]=='a')
      a++;
    else if(s[i]=='b')
      b++;
    else
      c++;
    if(s[i+1]=='a')
      a++;
    else if(s[i+1]=='b')
      b++;
    else
      c++;
    if(s[j]=='a')
      a++;
    else if(s[j]=='b')
      b++;
    else
      c++;
    if(s[j+1]=='a')
      a++;
    else if(s[j+1]=='b')
      b++;
    else
      c++;
    if(a>1)
      ans.pb('a');
    else if(b>1)
      ans.pb('b');
    else
      ans.pb('c');
    i+=2;
    j-=2;
  }
  cout<<ans;
  reverse(all(ans));
  if(i==j||i+1==j)
    cout<<s[i];
  deb(ans)
}         