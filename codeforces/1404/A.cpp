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


int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,k,i,o,e;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n>>k>>s;
    i=o=e=0;
    ll a[k+1]={};
    while(i<n)
    { 
      if(s[i]!='?')
      {
        if(a[i%k]==0)
        {
          a[i%k]=1+s[i]-'0';
          if(s[i]=='1')
            o++;
          else
            e++;
        }
        else
        {
          if(1+s[i]-'0'!=a[i%k])
          {
            NO
            break;
          }
        }
      }
      i++;
    }
    if(i==n)
    {
      if(o>k/2||e>k/2)
        NO
      else
        YES
    } 
  }
}