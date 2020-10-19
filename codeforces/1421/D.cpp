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
 

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,x,y,c1,c2,c3,c4,c5,c6;
  cin>>t;
  while(t--)
  {
    cin>>x>>y>>c1>>c2>>c3>>c4>>c5>>c6;
    c1=min(c1,c2+c6);
    c2=min(c2,c1+c3);
    c3=min(c3,c2+c4);
    c4=min(c4,c3+c5);
    c5=min(c5,c4+c6);
    c6=min(c6,c5+c1);
    c1=min(c1,c2+c6);
    c2=min(c2,c1+c3);
    c3=min(c3,c2+c4);
    c4=min(c4,c3+c5);
    c5=min(c5,c4+c6);
    c6=min(c6,c5+c1);
    c1=min(c1,c2+c6);
    c2=min(c2,c1+c3);
    c3=min(c3,c2+c4);
    c4=min(c4,c3+c5);
    c5=min(c5,c4+c6);
    c6=min(c6,c5+c1);
    c1=min(c1,c2+c6);
    c2=min(c2,c1+c3);
    c3=min(c3,c2+c4);
    c4=min(c4,c3+c5);
    c5=min(c5,c4+c6);
    c6=min(c6,c5+c1);
    if(y==0)
    {
      if(x>=0)
        deb(c6*x)
      else
        deb(-c3*x);
      cont;
    }
    else if(x==y)
    {
      if(x>0)
        deb(c1*x)
      else
        deb(-c4*x)
    }
    else if(x==0)
    {
      if(y>0)
        deb(c2*y)
      else
        deb(-c5*y)
    }
    else if(x>0&&y>0)
    {
      deb(c1*(min(x,y))+c6*(x-min(x,y))+c2*(y-min(x,y)));
    }
    else if(x<0&&y>0)
    {
      deb(c2*y-c3*x);
    }
    else if(x<0&&y<0)
    {
      x=-x;
      y=-y;
      //deb(c4*min(x,y))
      //deb()
      deb(c4*min(x,y)+c3*(x-min(x,y))+c5*(y-min(x,y)));
    }
    else
    {
      deb(c6*x-y*c5)
    }
  }
}