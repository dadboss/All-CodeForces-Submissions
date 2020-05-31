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
ll mx;
vector<ll> a[1009];
void dfs(ll n,ll p)
{
    mx++;
    for(auto x:a[n])
      if(x!=p)
        dfs(x,n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,x,n,l,r;
  cin>>t;
  while(t--)
  {
    cin>>n>>x;
    i=0;
    while(i<n-1)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
      i++;
    }
    if(a[x].size()<=1)
    {
      deb("Ayush")
    }
    else{
    i=0;
    mx=0;
    for(auto q:a[x])
      dfs(q,x);
    if(mx%2==0)
    {
      deb("Ashish")
    }
    else
      deb("Ayush")
  }
  i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
  }
}