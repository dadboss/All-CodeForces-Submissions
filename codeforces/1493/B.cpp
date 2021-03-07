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
  ll t=1,h,m,g,mn,rmn,rg;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>h>>m>>s;
    g=10*(s[0]-'0')+s[1]-'0';
    mn=10*(s[3]-'0')+s[4]-'0';
    while(1)
    {
      if(mn%10==3||mn%10==4||mn%10==6||mn%10==7||mn%10==9||g%10==3||g%10==4||g%10==6||g%10==7||g%10==9||mn/10==3||mn/10==4||mn/10==6||mn/10==7||mn/10==9||g/10==3||g/10==4||g/10==6||g/10==7||g/10==9)
      {

      }
      else
      {
        rmn=10*(g%10)+g/10;
        rg=10*(mn%10)+mn/10;
        if(rmn%10==2)
          rmn+=3;
        else if(rmn%10==5)
          rmn-=3;
        if(rmn/10==2)
          rmn+=30;
        else if(rmn/10==5)
          rmn-=30;
        if(rg%10==2)
          rg+=3;
        else if(rg%10==5)
          rg-=3;
        if(rg/10==2)    
          rg+=30;
        else if(rg/10==5)
          rg-=30;
        if(rmn>=m||rg>=h)
        {

        }
        else
        {
          cout<<g/10<<g%10<<":"<<mn/10<<mn%10<<"\n";
          break;
        }
      }
      mn++;
      if(mn==m)
        mn=0,g++;
      if(g==h)
        g=0;
    }
  }
}