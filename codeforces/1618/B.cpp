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
string s[N],ans;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,j;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=0;
    while(i<n-2)
      cin>>s[i++];
    i=1;
    while(i<n-2)
    {
      if(s[i][0]!=s[i-1][1])
      {
        ans.clear();
        j=0;
        while(j<i)
        {
          ans+=s[j][0];
          j++;
        }
        ans+=s[i-1][1];
        while(j<n-2)
        {
          ans+=s[j][0];
          j++;
        }
        ans+=s[j-1][1];
        deb(ans)
        i=-1;
        break;
      }
      i++;
    }
    if(i!=-1)
    {
      i=0;
      while(i<n-2)
      {
        cout<<s[i][0];
        i++;
      }
      cout<<s[i-1][1];
      deb('a')
    }
  }
}         