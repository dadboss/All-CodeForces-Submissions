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
string s[109];
vpi temp;
vi g;
vector<vi> ans;
void ul(ll i,ll j)
{
  g.clear();
  g.pb(i);
  g.pb(j);
  g.pb(i+1);
  g.pb(j);
  g.pb(i);
  g.pb(j+1);
  ans.pb(g);
}
void ur(ll i,ll j)
{
  g.clear();
  g.pb(i);
  g.pb(j);
  g.pb(i+1);
  g.pb(j+1);
  g.pb(i);
  g.pb(j+1);
  ans.pb(g);
}
void dl(ll i,ll j)
{
  g.clear();
  g.pb(i);
  g.pb(j);
  g.pb(i+1);
  g.pb(j);
  g.pb(i+1);
  g.pb(j+1);
  ans.pb(g);
}
void dr(ll i,ll j)
{
  g.clear();
  g.pb(i);
  g.pb(j+1);
  g.pb(i+1);
  g.pb(j);
  g.pb(i+1);
  g.pb(j+1);
  ans.pb(g);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,j,n,m;
  cin>>t;
  while(t--)
  {
    ans.clear();
    cin>>n>>m;
    i=1;
    while(i<=n)
    {
      cin>>s[i];
      s[i]='!'+s[i];
      i++;
    }
    i=1;
    while(i<n)
    {
      poi:
      j=1;
      while(j<m)
      {
        lkj:
        temp.clear();
        if(s[i][j]=='1')
          temp.pb({i,j});
        if(s[i][j+1]=='1')
          temp.pb({i,j+1});
        if(s[i+1][j]=='1')
          temp.pb({i+1,j});
        if(s[i+1][j+1]=='1')
          temp.pb({i+1,j+1});
        if(temp.size()==4)
        {
          ul(i,j);
          dr(i,j);
          dl(i,j);
          ur(i,j);
        }
        else if(temp.size()==3)
        {
          if(s[i][j]=='0')
            dr(i,j);
          else if(s[i+1][j]=='0')
            ur(i,j);
          else if(s[i][j+1]=='0')
            dl(i,j);
          else
            ul(i,j);
        }
        else if(temp.size()==2)
        {
          if(s[i][j]=='1'&&s[i][j+1]=='1')
          {
            dl(i,j);
            dr(i,j);
          }
          else if(s[i][j]=='1'&&s[i+1][j]=='1')
          {
            dr(i,j);
            ur(i,j);
          }
          else if(s[i][j]=='1'&&s[i+1][j+1]=='1')
          {
            dr(i,j);
            ul(i,j);
          }
          else if(s[i][j+1]=='1'&&s[i+1][j]=='1')
          {
            ur(i,j);
            dl(i,j);
          }
          else if(s[i+1][j+1]=='1'&&s[i+1][j]=='1')
          {
            ur(i,j);
            ul(i,j);
          }
          else if(s[i][j+1]=='1'&&s[i+1][j+1]=='1')
          {
            ul(i,j);
            dl(i,j);
          }
        }
        else if(temp.size()==1)
        {
          if(s[i][j]=='1')
          {
            ul(i,j);
            ur(i,j);
            dl(i,j);
          }
          else if(s[i][j+1]=='1')
          {
            ur(i,j);
            dr(i,j);
            ul(i,j);
          }
          else if(s[i+1][j]=='1')
          {
            dl(i,j);
            dr(i,j);
            ul(i,j);
          }
          else
          {
            dr(i,j);
            dl(i,j);
            ur(i,j);
          }
        }
        s[i][j]=s[i+1][j]=s[i][j+1]=s[i+1][j+1]='0';
        j+=2;
      }
      if(j==m)
        {
          j--;
          goto lkj;
        }
      i+=2;
    }
    if(i==n)
    {
      i--;
      goto poi;
    }
    deb(ans.size())
    for(auto x:ans)
    {
      for(auto y:x)
        cout<<y<<" ";
      cout<<"\n";
    }
  }
}