#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
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

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,i,j,x,u;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>s;
    ll f[26]={};
    set<ll> st[s.size()+10];
    set<ll> d;
    i=s.size()-1;  
    while(i>-1)
    {
      d.insert(s[i]-'a');
      st[i]=d;
      i--;
    }
    vi v[26];
    i=0;
    while(i<s.size())
    {
      v[s[i]-'a'].pb(i);
      i++;
    }
    string ans;
    j=-1;
    ll op=0;
    while(!d.empty())
    {
     // deB(d.
      /*for(auto x:d)
      {
        deb(x)
      }
      YES
      if(d.size()==4)
        break;*/
      
      for(auto it=d.rbegin();it!=d.rend();it++)
      {
        x=*it;
        
        u=upper_bound(all(v[x]),j)-v[x].begin();
        if(u==v[x].size())
          cont;
        bool ty=0;
        for(auto qw:d)
        {
          if(st[v[x][u]].find(qw)==st[v[x][u]].end())
          {
            ty=1;
            break;
          }
        }
        if(ty==0)
        {
          j=v[x][u];
          ans+=(char)('a'+x);
          break;
        }
      }
      d.erase(ans.back()-'a');
      //deB(ans.back)
    }
    deb(ans)
  }
}