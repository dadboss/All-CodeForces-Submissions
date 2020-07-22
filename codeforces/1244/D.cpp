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
vector<ll> a[100009];
ll c[3][100009],sum,co[100009];
void pri(ll n,ll i,ll p)
{
  i%=3;
  co[n]=i;
  for(auto x:a[n])
    if(x!=p)
      pri(x,i+1,n);
}
void pr(ll n,ll i,ll p)
{
  if(i==-1)
    i=2;
  co[n]=i;
  for(auto x:a[n])
    if(x!=p)
      pr(x,i-1,n);
}
void dfs(ll n,ll i,ll p)
{
  i%=3;
  sum+=c[i][n];
  //deB(sum,n)
  for(auto x:a[n])
    if(x!=p)
      dfs(x,i+1,n);
}
void fs(ll n,ll i,ll p)
{
  if(i==-1)
    i=2;
  sum+=c[i][n];
  //deB(sum,n)
  for(auto x:a[n])
    if(x!=p)
      fs(x,i-1,n);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r,f=0;
  cin>>n;
  ll i=0,j;
  while(i<3)
  {
    j=1;
    while(j<=n)
    {
      cin>>c[i][j];
      j++;
    }
    i++;
  }
  i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
    if(a[l].size()>2||a[r].size()>2)
    {
      deb(-1)
      return 0;
    }
  }
  i=1;
  ll x;
  while(i<=n)
  {
    if(a[i].size()==1)
      {
        x=i;
        break;
      }
    i++;
  }
  i=0;
  ll ind;
  ll ans=LLONG_MAX;
  while(i<3)
  {
    sum=0;
    dfs(x,i,-1);
    if(sum<ans)
    {
      f=1;
      ind=i;
      ans=sum;
    }
    i++;
  }
  i=0;
  while(i<3)
  {
    sum=0;
    fs(x,i,-1);
    if(sum<ans)
    {
      f=2;
      ind=i;
      ans=sum;
    }
    i++;
  }
  deb(ans)
  if(f==1)
    pri(x,ind,-1);
  else
    pr(x,ind,-1);
  i=1;
  while(i<=n)
  {
    cout<<co[i]+1<<" ";
    i++;
  }
}