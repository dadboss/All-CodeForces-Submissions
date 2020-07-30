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
#define inf 1e13
pair<ll,ll> q;
ll tot,h[100009],p[100009],x,y;
vector<ll> a[100009];
pair<ll,ll> dfs(ll n,ll par)
{
  pair<ll,ll> t;
  t.ff=0;
  t.ss=0;
  for(auto x:a[n])
    {
      if(x!=par)
      {
        q=dfs(x,n);
        if(q.ff==inf)
          return q;
        t.ff+=q.ff;
        t.ss+=q.ss;
      }
    }
  tot=p[n]+t.ff+t.ss;
  if(abs(h[n])>tot||(tot+h[n])%2==1)
    {
     // deb(n)
      return {inf,inf};
    }
  x=(tot+h[n])/2;
  y=x-h[n];
  if(n==3)
  {
    //Deb(tot,x,y);
    //deB(t.ff,t.ss);
  }
  if(x<0||y<0||x>tot||y>tot||t.ff>x)
    {
      //deb(n)
      return {inf,inf};
    }
  return {x,y};
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,m,l,r;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    i=1;
    while(i<=n)
      {
        cin>>p[i];
        a[i].clear();
        i++;
      }
    i=1;
    while(i<=n)
      cin>>h[i++];
    i=n-1;
    while(i--)
    {
      cin>>l>>r;
      a[l].pb(r);
      a[r].pb(l);
    }
    q=dfs(1,-1);
    if(q.ff==inf)
      NO
    else
      YES
  }
}