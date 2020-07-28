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
map<ll,ll> x;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,i=0;
  cin>>n>>m;
  vector<ll> a(n);
  while(i<n)
  {
    cin>>a[i];
    x[a[i]]=1;
    i++;
  }
  ll ct=0;
  vector<ll> ans;
  i=0;
  while(1)
  {
    if(x.find(a[i]+1)==x.end())
    {
      ct+=x[a[i]];
      x[a[i]+1]=1+x[a[i]];
      ans.pb(a[i]+1);
      a.pb(a[i]+1);
    }
    if(ans.size()==m)
      break;
    if(x.find(a[i]-1)==x.end())
    {
      ct+=x[a[i]];
      x[a[i]-1]=1+x[a[i]];
      ans.pb(a[i]-1);
      a.pb(a[i]-1);
    }
    if(ans.size()==m)
      break;
    i++;
  }
  deb(ct)
  for(auto x:ans)
    cout<<x<<" ";
}