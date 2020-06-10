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
vector<ll> a[4009];
bool v[4009][4009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,i,l,r,ans=LLONG_MAX;
  cin>>n>>m;
  while(m--)  
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
    v[l][r]=1;
    v[r][l]=1;
  }
  i=1;
  while(i<=n)
  {
    for(auto x:a[i])
    {
      for(auto e:a[x])
      {
        //Deb(i,x,e);
        if(v[e][i])
          ans=min(ans,a[i].size()+a[x].size()+a[e].size()-6ll);
      }
    }
    i++;
  }
  if(ans==LLONG_MAX)
    ans=-1;
  deb(ans)
}