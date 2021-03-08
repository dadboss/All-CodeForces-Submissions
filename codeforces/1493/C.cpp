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
  ll t=1,sum,ex,n,k,i,j,l;
  cin>>t;
  string s,h;
  while(t--)
  {
    cin>>n>>k>>s;
    if(n%k)
    {
      deb(-1)
      cont;
    }
    ll f[26]={}; 
    for(auto x:s)
      f[x-'a']++;
    i=0;
    while(i<26)
    {
      if(f[i]%k)
        break;
      i++;
    }
    if(i==26)
    {
      deb(s)
      cont;
    }
    f[s.back()-'a']--;
    i=n-2;
    while(i>-2)
    {
      ll g[26]={};
      j=sum=0;
      while(j<26)
      {
        if(f[j]%k)
          sum+=k-(f[j]%k),g[j]+=k-(f[j]%k);
        j++;
      }
      //deB(i,sum)
      if(sum==n-i-1)
      {
        j=s[i+1]-'a'+1;
        while(j<26&&g[j]==0)
          j++;
        if(j<26)
        {
          h=s;
          h[i+1]='a'+j;
          g[j]--;
          l=i+2;
          j=0;
          while(j<26)
          {
            while(g[j]--)
            {
              h[l]='a'+j;
              l++;
            }
            j++;
          }
          deb(h)
          break;
        }
      }
      else if(sum<n-i-1&&(-sum+n-i-1)%k==0)
      {
        h=s;
        if(s[i+1]=='z')
          goto poi;
        h[i+1]++; 
        //deB(i,h[i+1])
        if(g[h[i+1]-'a'])
          g[h[i+1]-'a']--,sum--;
        else
          g[h[i+1]-'a']=k-1,sum+=k-1;
        if(sum>n-i-2)
          goto poi;
        ex=n-i-2-sum;
        l=i+2;
        while(ex--)
        {
          h[l]='a';
          l++;
        }
        j=0;
        while(j<26)
        {
          while(g[j]--)
          {
            h[l]='a'+j;
            l++;
          }
          j++;
        }
        deb(h)
        break;
      }
      poi:
      if(i!=-1)
      f[s[i]-'a']--;
      i--;
    }
  } 
}
/*
b o s s z b
0 1 2 3 4 5
*/