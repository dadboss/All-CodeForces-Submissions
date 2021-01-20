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
ll a[N],se[N],f[N],so[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t=1,tt=0,n,i,d,od,ev,x,y;
  cin>>t;
  while(t--)
  {
    tt++;
    cin>>n;

    i=1;
    od=ev=1e13;
    while(i<=n)
    {
      cin>>a[i];
      f[i]=a[i]-f[i-1];
      if(i%2)
        od=min(od,f[i]);
      else
        ev=min(ev,f[i]);
      //deB(i,f[i])
      i++;
    }   
    if(f[n]==0&&min(od,ev)>-1)
    {
      YES
      cont;
    }
    a[n+1]=a[n+2]=1e13;
    i=n;
    se[n+1]=se[n+2]=so[n+1]=so[n+2]=1e13;
    while(i)
    {
      if(i%2)
        so[i]=min(f[i],so[i+2]);
      else
        se[i]=min(f[i],se[i+2]);
      i--;
    }
    i=1;
    while(i<n-1)
    {
      x=a[i+1]-f[i-1];
      y=a[i]-x;
      d=a[i+2]-y-f[i+2];
      /*if(i==2)
        Deb(x,y,d)*/
      if(x<0||y<0)
      {
        goto qwe;
      }
      if(i%2==n%2)
      {
        if(f[n]+d==0){
        if(i%2&&so[i+2]+d>-1&&se[i+3]-d>-1)
          {
            YES
            break;
          }
          if(i%2==0&&so[i+3]-d>-1&&se[i+2]+d>-1)
          {
            YES
            break;
          }
        }
      }
      else
      {
        if(f[n]-d==0)
        {
          if(i%2&&so[i+2]+d>-1&&se[i+3]-d>-1)
          {
            YES
            break;
          }
          if(i%2==0&&so[i+3]-d>-1&&se[i+2]+d>-1)
          {
            YES
            break;
          }
        }
      }
      qwe:
      if(f[i]<0)
      {
        NO
        break;
      }
      i++;
    }
    if(i==n-1)
      {
        swap(a[n-1],a[n]);
        i=1;
        while(i<=n)
        {
          a[i]-=a[i-1];
          if(a[i]<0)
          {
            NO
            break;
          }
          i++;
        }
        if(i==n+1)
        {
          if(a[n]==0)
            YES
          else
            NO
        }
      }
  }
}
/*
1 1 1 1 1 1 1 1 1
1 2 3 4 5 6 7 8 9*/