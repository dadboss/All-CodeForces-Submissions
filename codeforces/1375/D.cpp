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
ll a[1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  ll x,t,i,n,r;
  cin>>t;
  while(t--)
  {
    set<ll> s;
    cin>>n;
    ll f[n+5]={};
    i=1;
    set<ll> q;
    while(i<=n)
    {
      cin>>a[i];
      if(a[i]!=i-1)
      {
        q.insert(i);
      }
      f[a[i]]++;
      i++;
    }
    i=0;
    while(i<=n)
    {
      if(f[i]==0)
        s.insert(i);
      i++;
    }
    vector<ll> v;
    while(!q.empty())
    {
      x=*s.begin();
      s.erase(x);
      f[x]++;
      if(x==n)
      {
        r=*q.begin();
        v.pb(r);
        f[a[r]]--;
        if(f[a[r]]==0)
          s.insert(a[r]);
        a[r]=x;
      }
      else
      {
        v.pb(x+1);
        q.erase(x+1);
        f[a[x+1]]--;
        if(f[a[x+1]]==0)
          s.insert(a[x+1]);
        a[x+1]=x;
      }
    }
    deb(v.size())
    for(auto x:v)
      cout<<x<<" ";
    cout<<"\n";
  }
}
