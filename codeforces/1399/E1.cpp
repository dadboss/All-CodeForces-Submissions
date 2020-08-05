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
map<pair<ll,ll>,ll> m;
ll w;
pair<ll,ll> v;
class CompareDist
{
public:
    bool operator()(pair<ll,ll> n1,pair<ll,ll> n2) {
        return n1.ff*n1.ss-n1.ss/2*n1.ff<n2.ff*n2.ss-n2.ss/2*n2.ff;
    }
};
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,CompareDist> s;
ll sum,q;
ll dfs(ll n,ll p)
{
  if(n!=1&&a[n].size()==1)
  {
    return 1;
  }
  ll ct=0;
  for(auto x:a[n])
  {
    if(x==p)
      continue;
    q=dfs(x,n);
    ct+=q;
    if(m.find({x,n})==m.end())
      {
        w=m[{n,x}];
        sum+=w*q;
        s.push({q,w});
      }
    else
      {
        w=m[{x,n}];
        sum+=q*w;
        s.push({q,w});
      }
  }
  return ct;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,l,r,w,i,n,S,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>S;
    sum=0;
    m.clear();
    i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
    i=0;
    while(i<n-1)
    {
      cin>>l>>r>>w;
      a[l].pb(r);
      a[r].pb(l);
      m[{l,r}]=w;
      i++;
    }
    while(!s.empty())
      s.pop();
    dfs(1,-1);
    ans=0;
    while(S<sum)
    {
      v=s.top();
      s.pop();
      sum-=v.ff*v.ss;
      //deB(v.ff,v.ss)
      sum+=v.ff*(v.ss/2);
      s.push({v.ff,v.ss/2});
      ans++;
    }
    deb(ans)
  }
}