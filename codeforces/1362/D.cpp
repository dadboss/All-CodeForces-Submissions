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
vector<ll> a[500009];
vector<ll> col[500009];
ll c[500009];
ll ans[500009];
ll pri[500009];
bool chek(ll n,ll cr)
{
  set<ll> s;
  for(auto x:a[n])
  {
    if(ans[x]&&c[x]==cr)
    {
      deb(-1)
      exit(0);
    }
    if(ans[x]&&c[x]<cr)
      {
        s.insert(c[x]);
      }
  }
  if(s.size()==cr-1)
    return 1;
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,l,r;
  cin>>n>>m;
  while(m--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  ll i=1;
  while(i<=n)
    {
      cin>>c[i];
      col[c[i]].pb(i);
      i++;
    }
  i=1;
  ll k=1,j;
  while(i<=n)
  {
    j=0;
    while(j<col[i].size())
    {
      if(chek(col[i][j],i))
        {
          ans[col[i][j]]=k;
          pri[k]=col[i][j];
          k++;
        }
      else
      {
        deb(-1);
        return 0;
      }
      j++;
    }
    i++;
  }
  i=1;
  while(i<=n)
  {
    cout<<pri[i]<<" ";
    i++;
  }
}