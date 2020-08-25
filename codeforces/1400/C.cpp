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
  ll t,i,x;
  string s,w,temp;
  cin>>t;
  while(t--)
  {
    cin>>s>>x;
    w=s;
    temp=s;
    i=0;
    while(i<s.size())
    {
      //deb(i)
      temp[i]='0';
      if(s[i]=='1'&&i<x)
      {
        if(i+x>=s.size())
        {
          deb(-1)
          break;
        }
        w[i+x]='3';
      }
      else if(s[i]=='0'&&i<x)
      {
        if(i+x<s.size())
        {
          w[i+x]='2';
        }
      }
      else if(s[i]=='1'&&i+x>=s.size())
      {
        if(i-x<0||w[i-x]=='2')
        {
          deb(-1)
          break;
        }
        w[i-x]='3';
      }
      else if(s[i]=='0'&&i+x>=s.size())
      {
        if(i-x>-1&&w[i-x]=='3')
        {
          deb(-1)
          break;
        }
        if(i-x>-1)
        w[i-x]='2';
      }
      else if(s[i]=='1')
      {
        if(w[i-x]=='2'&&w[i+x]=='2')
        {
          deb(-1)
          break;
        }
        else if(w[i-x]=='2')
        {
          w[i+x]='3';
        }
        else if(w[i+x]=='2')
        {
          w[i-x]='3';
        }
        else if(w[i+x]!='3'&&w[i-x]!='3')
          {
            w[i-x]='3';
          }
      }
      else
      {
        if(w[i+x]=='3'||w[i-x]=='3')
        {
          deb(-1)
          break;
        }
        w[i+x]='2';
        w[i-x]='2';
      }
      i++;
    }
    if(i!=s.size())
    {
      //deb(-1)
      cont;
    }
    i=0;
    while(i<w.size())
    {
      if(w[i]=='3')
      {
        if(i-x>-1)
          temp[i-x]='1';
        if(i+x<w.size())
          temp[i+x]='1';
      }
      i++;
    }
    if(temp!=s)
    {
      deb(-1)
      cont;
    }
    for(auto x:w)
    {
      if(x=='3')
        cout<<1;
      else
        cout<<0;
    }
    cout<<"\n";
  }
}