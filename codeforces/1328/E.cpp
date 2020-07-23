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
ll x=0;
vector<ll> a[200009];
ll in[200009],out[200009],v[200009],dep[200009],par[200009];
void dfs(ll n,ll p,ll d)
{
  in[n]=x;
  x++;
  dep[n]=d;
  par[n]=p;
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n,d+1);
  out[n]=x;
  x++;
  return;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,l,r,k;
  cin>>n>>m;
  ll i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,-1,0);
  while(m--)
  {
    cin>>k;
    i=0;
    x=1;
    while(i<k)
    {
      cin>>v[i];
      if(dep[v[i]]>dep[x])
        x=v[i];
      i++;
    }
    //deb(x)
    i=0;
    while(i<k)
    {
      if((out[v[i]]<in[x]&&out[par[v[i]]]<in[x])||(in[v[i]]>out[x]&&in[par[v[i]]]>out[x]))
      {
        NO
        break;
      }
      i++;
    }
    if(i==k)
      YES
  }
}