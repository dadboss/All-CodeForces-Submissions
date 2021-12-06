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
  ll n,k,i;
  string s,ns;
  cin>>n>>k>>s;
  ll ans=0;
  queue<string> q;
  q.push(s);
  set<string> st;
  st.insert(s);
  while(k&&!q.empty())
  {
    s=q.front();
    ans+=n-s.size();
    k--;
    q.pop();
    i=0;
    while(i<s.size())
    {
      ns=s.substr(0,i)+s.substr(i+1,s.size()-1);
      if(st.find(ns)==st.end())
      {
        st.insert(ns);
        q.push(ns);
      }
      i++;
    }
  }
  if(k)
    ans=-1;
  deb(ans)
}         