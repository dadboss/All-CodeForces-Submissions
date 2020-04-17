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
ll t=0;
vector<ll> a[200001];
vector<ll> z;
void dfs(ll n,ll p,ll d)
{
  ll st=t;
  t++;
  for(auto x:a[n])
    if(x!=p)
      dfs(x,n,d+1);
  z.pb(d+1+st-t);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k,sum=0,l,r,i=0;
  cin>>n>>k;
  while(i<n-1)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
    i++;
  }
  dfs(1,-1,0);
  sort(all(z),greater<int>());
  i=0;
  while(i<k)
  {
    sum+=z[i];
    i++;
  }
  deb(sum);
} 