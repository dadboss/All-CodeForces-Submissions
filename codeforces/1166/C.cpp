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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll N,z=0,d;
  cin>>N;
  vector<ll> p;
  while(N--)
  {
    cin>>d;
    if(d>0)
      p.pb(d);
    else if(d<0)
      p.pb(-d);
    else
      z++;
  }
  ll ans=z*(z-1)/2;
  sort(all(p));
  ll i=0,u;
  while(i<p.size())
  {
    u=upper_bound(all(p),2*p[i])-p.begin()-1;
    if(u>i)
    ans+=u-i;
    i++;
  }
  deb(ans)
}