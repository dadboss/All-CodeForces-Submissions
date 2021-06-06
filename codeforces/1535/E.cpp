#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
#define LG 21
ll a[N],c[N],par[LG][N];
void precompute(ll n)
{
  for(ll i=2;i<LG;i++)
  {
    for(ll j=n;j<=n;j++)
    {
      if(par[i-1][j])
          par[i][j]=par[i-1][par[i-1][j]];
    }
  }
}
int main()
{
  //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif*/
  par[0][1]=1;
  ll q,t,u,v,w,sum,mon,x;
  cin>>q>>a[1]>>c[1];
  ll i=2;
  while(i<=q+1)
  {
    cin>>t;
    ll j=i;
    if(t==1)
    {
        cin>>x>>a[i]>>c[i];
        par[1][i]=x+1;
        par[0][i]=i;
        precompute(i);
    }
    else
    {
        cin>>v>>w;
        v++;
        sum=mon=0;
        while(w&&a[v])
        {
            u=v;
            i=LG-1;
            while(i>-1)
            {
                if(par[i][u]&&a[par[i][u]])
                    u=par[i][u];
                i--;
            }
            x=min(w,a[u]);
            sum+=x;
            mon+=x*c[u];
            w-=x;
            a[u]-=x;
        }
        deB(sum,mon)
    }
    i=j;
    i++;
  }
}        