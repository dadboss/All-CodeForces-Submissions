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
  ll t,sum,i,j,n,k;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n>>k;
    s=to_string(n);
    while(1)
    {
      i=0;
      sum=0;
      while(i<s.size())
      {
        if(sum+s[i]-'0'>k)
        {
          j=i;
          while(j<s.size())
          {
            s[j]='0';
            j++;
          } 
          if(i==0)
          {
            s='1'+s;
            break;
          }
          if(s[i-1]=='9')
          {
            i--;
            while(i>-1&&s[i]=='9')
              {
                s[i]='0';
                i--;
              }
            if(i==-1)
            {
              s='1'+s;
            }
            else
              s[i]++;
          }
          else
          {
            s[i-1]++;
          }
          break;
        }
        else
          {
            sum+=s[i]-'0';
          }
        i++;
      }
      if(i==s.size())
        break;
    }
    i=stoull(s);
    deb(i-n)
  }
}