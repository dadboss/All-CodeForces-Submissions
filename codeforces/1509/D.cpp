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
string s[3];
ll c[3];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,n,i,j,k,l,h;
  cin>>t;
  while(t--)
  {
     cin>>n>>s[0]>>s[1]>>s[2];
     i=0;
     while(i<3)
     {
      c[i]=0;
      for(auto x:s[i])
        if(x=='1')
          c[i]++;
      i++;
     }
     i=0;
     while(i<3)
     {
      j=i+1;
      while(j<3)
      {
        if(c[i]>=n&&c[j]>=n)
        {
          string ans;
          k=0;
          l=h=0;
          while(k<n)
          {
            while(s[i][l]=='0')
              ans+='0',l++;
            while(s[j][h]=='0')
              ans+='0',h++;
            ans+='1';
            l++;
            h++;
            k++;
          }
          while(l<2*n)
            ans+=s[i][l],l++;
          while(h<2*n)
            ans+=s[j][h],h++;
          deb(ans)
          break;
        }
        if(c[i]<=n&&c[j]<=n)
        {
          string ans;
          k=0;
          l=h=0;
          while(k<n)
          {
            while(s[i][l]=='1')
              ans+='1',l++;
            while(s[j][h]=='1')
              ans+='1',h++;
            ans+='0';
            k++;
            l++;
            h++;
          }
          while(l<2*n)
            ans+=s[i][l],l++;
          while(h<2*n)
            ans+=s[j][h],h++;
          deb(ans)
          break;
        }
        j++;
      }
      if(j!=3)
        break;
      i++;
     }
  }
}