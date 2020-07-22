#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[4009];
bool vis[4009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j,mx;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    while(i<2*n)
      {
        cin>>a[i];
        vis[i]=0;
        i++;
      }
    vector<ll> v;
    j=2*n-1;
    while(j>-1)
    {
      i=mx=0;
      while(i<=j)
      {
        if(a[i]>a[mx])
          mx=i;
        i++;
      }
      v.pb(j-mx+1);
      j=mx-1;
    }
    vis[0]=1;
    for(auto x:v)
    {
      i=n;
      while(i>=x)
      {
        if(vis[i-x])
          vis[i]=1;
        i--;
      }
    }
    if(vis[n])
      YES
    else
      NO
  }
}