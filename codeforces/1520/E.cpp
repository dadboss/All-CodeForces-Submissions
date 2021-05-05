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
#define N 1000009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll lt[N],rt[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,i,h,num,ans;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>n>>s;
    s='!'+s;
    h=0;
    for(auto x:s)
      if(x=='*')
        h++;
    if(h<2)
    {
      deb(0)
      cont;
    }
    i=s.size()-1;
    num=0;  
    rt[i+1]=0;
    while(i)
    {
      if(s[i]=='*')
        rt[i]=rt[i+1],num++;
      else
        rt[i]=rt[i+1]+num;
      //deB(i,rt[i])
      i--;
    }
    num=0;
    i=1;
    while(i<s.size())
    {
      if(s[i]=='*')
        lt[i]=lt[i-1],num++;
      else
        lt[i]=lt[i-1]+num;
      //deB(i,lt[i])
      i++;
    } 
    i=1;
    ans=1e15;
    while(i<=s.size())
    {
      ans=min(ans,lt[i-1]+rt[i]);
      i++;
    }
    deb(ans)
  }
}