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
vi ans;
string s,a;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,i,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>a>>s;
    if(a.size()>s.size()||(a.size()==s.size()&&a>=s))
    {
      deb(-1)
      cont;
    }
    ans.clear();
    i=a.size()-1;
    j=s.size()-1;
    while(i>-1&&j>-1)
    {
      if(s[j]>=a[i])
        ans.pb(s[j]-a[i]);
      else
      {
        ans.pb(10-(a[i]-s[j]));
        if(j==0||s[j-1]!='1')
        {
          deb(-1)
          i=-10;
          break;
        }
        j--;
      }
      i--;
      j--;
    }
    if(i==-10)
      cont
    if(i>-1)
    {
      deb(-1)
      cont;
    }
    while(j>-1)
    {
      ans.pb(s[j]-'0');
      j--;
    }
    while(!ans.empty()&&ans.back()==0)
      ans.pop_back();
    if(ans.empty())
    {
      deb(-1)
      cont;
    }
    while(!ans.empty())
    {
      cout<<ans.back();
      ans.pop_back();
    }
    cout<<"\n";
  }
}         