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
stack<ll> s1,s2;
vector<ll> a[200009];
ll ans=0;
ll c[200009],b[200009],t[200009];
ll dfs(ll n,ll p)
{
  if(p!=-1)
    c[n]=min(c[n],c[p]);
  ll s1=0,s2=0,k;
  if(b[n]==0&&t[n]==1)  
    s2++;
  else if(b[n]==1&&t[n]==0)
    s1++;
  for(auto x:a[n])
  {
    if(x!=p)
    {
      k=dfs(x,n);
      if(k>0)
        s1+=k;
      else
        s2-=k;
    }
  }
  k=min(s1,s2);
  ans+=2*k*c[n];
  s1-=k;
  s2-=k;
  if(s1)
    return s1;
  else
    return -s2;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,ct=0,l,r;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>c[i]>>b[i]>>t[i];
    if(b[i]==1&&t[i]==0)
      ct++;
    else if(b[i]==0&&t[i]==1)
      ct--;
    i++;
  }
  if(ct)
  {
    deb(-1);
    return 0;
  }
  i=n-1;
  while(i--)
  {
    cin>>l>>r;
    a[l].pb(r);
    a[r].pb(l);
  }
  dfs(1,-1);
  deb(ans);
}
