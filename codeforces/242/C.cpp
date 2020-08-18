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

map<pi,ll> m;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll x1,x2,y1,y2,n,l,r,j;
  pi u;
  cin>>x1>>y1>>x2>>y2;
  cin>>n;
  while(n--)
  {
    cin>>r>>l>>j;
    while(l<=j)
    {
      m[{r,l}]=1;
      l++;
    }
  }
  queue<pi> q;
  set<pi> s;
  q.push({x1,y1});
  while(!q.empty())
  {
    l=q.front().ff;
    r=q.front().ss;
    //Deb(l,r,(m[{l,r}]))
    q.pop();
    if(m.find({l+1,r})!=m.end()&&m[{l+1,r}]==1&&(l+1!=x1||r!=y1))
    {
      m[{l+1,r}]=1+m[{l,r}];
      q.push({l+1,r});
    }
    if(m.find({l-1,r})!=m.end()&&m[{l-1,r}]==1&&(l-1!=x1||r!=y1))
    {
      m[{l-1,r}]=1+m[{l,r}];
      q.push({l-1,r});
    }
    if(m.find({l,r+1})!=m.end()&&m[{l,r+1}]==1&&(l!=x1||r+1!=y1))
    {
      m[{l,r+1}]=1+m[{l,r}];
      q.push({l,r+1});
    }
    if(m.find({l,r-1})!=m.end()&&m[{l,r-1}]==1&&(l!=x1||r-1!=y1))
    {
      m[{l,r-1}]=1+m[{l,r}];
      q.push({l,r-1});
    }
    if(m.find({l-1,r-1})!=m.end()&&m[{l-1,r-1}]==1&&(l-1!=x1||r-1!=y1))
    {
      m[{l-1,r-1}]=1+m[{l,r}];
      q.push({l-1,r-1});
    }
    if(m.find({l+1,r-1})!=m.end()&&m[{l+1,r-1}]==1&&(l+1!=x1||r-1!=y1))
    {
      m[{l+1,r-1}]=1+m[{l,r}];
      q.push({l+1,r-1});
    }
    if(m.find({l+1,r+1})!=m.end()&&m[{l+1,r+1}]==1&&(l+1!=x1||r+1!=y1))
    {
      m[{l+1,r+1}]=1+m[{l,r}];
      q.push({l+1,r+1});
    }
    if(m.find({l-1,r+1})!=m.end()&&m[{l-1,r+1}]==1&&(l-1!=x1||r+1!=y1))
    {
      m[{l-1,r+1}]=1+m[{l,r}];
      q.push({l-1,r+1});
    }
    if(m[{x2,y2}]!=1)
    {
      deb((m[{x2,y2}])-1)
      return 0;
    }
  }
  deb(-1)
}