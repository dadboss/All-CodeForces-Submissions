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
  ll t,i,j,n,ans,ct;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n>>s;
    i=0;
    while(i<n&&s[i]==s[0])
      i++;
    if(i==n)
    {
      ans=n/3;
      if(n%3)
        ans++;
      deb(ans)
      cont;
    }
    j=n-1;
    while(s[j]==s[0])
      j--;
    ans=n-1-j+i;
    ans/=3;
    i++;
    while(i<=j)
    {
      if(s[i]==s[i-1])
      {
        ct=1;
        while(i<=j&&s[i]==s[i-1])
        {
          ct++;
          i++;
        }
        //deB(ct,i)
        ans+=ct/3;
      }
    else
      i++;
    }
    deb(ans)
  }
}