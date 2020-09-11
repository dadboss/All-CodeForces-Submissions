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
#define N 2e5+10
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
ll T=1;
string s;
ll tri[100009][26];
void ins()
{
  ll i=0;
  ll u=0;
  while(i<s.size())
  {
    if(tri[u][s[i]-'a']==0)
      {
        tri[u][s[i]-'a']=T;
        T++;
      }
    //deB(u,tri[u][s[i]-'a'])
    u=tri[u][s[i]-'a'];
    i++;
  }
}
pi dfs(ll u)
{
  ll i=0;
  pi p,aux;
  aux.ff=-1;
  while(i<26)
  {
    if(tri[u][i])
    {
      aux=dfs(tri[u][i]);
      //deB(aux.ff,aux.ss)
      if(aux.ff==0)
        p.ff=1;
      if(aux.ss==0)
        p.ss=1;
    }
    i++;
  }
  if(aux.ff==-1)
   {
     //Deb(u,0,1);
     return {0,1};
   }
  else
    {
      //Deb(u,p.ff,p.ss)
      return p;
    }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k;
  cin>>n>>k;
  k=k%2;
  ll i=0;
  while(i<n)
  {
    cin>>s;
    ins();
    i++;
  }
  pi a=dfs(0);
  //deB(a.ff,a.ss)
  if(a.ff&&a.ss)
    deb("First")
  else if(a.ff)
  {
    if(k)
      deb("First")
    else
      deb("Second")
  }
  else 
    deb("Second")
}