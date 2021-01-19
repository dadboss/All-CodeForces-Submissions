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

//map<ll,ll> m;
multiset<ll> m;
ll a[2009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,i,j,x,nx;
  cin>>t;
  while(t--)
  {
    m.clear();
    cin>>n;
    i=0;
    while(i<2*n)
    {
      cin>>a[i];
      //m[a[i]]++;
      m.insert(a[i]);
      i++;
    }   
    sort(a,a+2*n);
    j=2*n-2;
    //deb(j)
    //j=1;
    while(j>-1)
    {
      //deb(j)
      multiset<ll> s=m;
      s.erase(s.find(a[2*n-1]));
      s.erase(s.find(a[j]));
      //deb(s.size())
     // break;
      x=a[2*n-1];
      while(!s.empty())
      {
        if(s.find(x-*s.rbegin())==s.end()||(*s.rbegin()*2==x&&s.count(*s.rbegin())==1))
          break;
        nx=*s.rbegin();
        s.erase(s.find(nx));
        s.erase(s.find(x-nx));
        x=max(nx,x-nx);
      }
      if(s.empty())
      {
        YES
        //break;
        deb(a[2*n-1]+a[j]);
        s=m;
        s.erase(s.find(a[2*n-1]));
        s.erase(s.find(a[j]));
        deB(a[2*n-1],a[j]);
        x=a[2*n-1];
        while(!s.empty())
        {
          nx=*s.rbegin();

          deB(nx,x-nx);
          s.erase(s.find(nx));
          s.erase(s.find(x-nx));
          x=max(nx,x-nx);
        }
        break;
      }
      j--;
    }
    if(j==-1)
      NO
   // YES
  }
}