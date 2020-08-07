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
ll b[10000009];
map<pair<ll,ll>,ll> m,c;
ll w;
pair<ll,ll> v;
class CompareDist
{
public:
    bool operator()(pair<ll,ll> n1,pair<ll,ll> n2) {
        return n1.ff*n1.ss-n1.ss/2*n1.ff<n2.ff*n2.ss-n2.ss/2*n2.ff;
    }
};
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,CompareDist> s,o;
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
        if(c[{n,x}]==1)
          s.push({q,w});
        else
          o.push({q,w});
      }
    else
      {
        w=m[{x,n}];
        sum+=q*w;
        if(c[{x,n}]==1)
          s.push({q,w});
        else
          o.push({q,w});
      }
  }
  return ct;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,l,r,w,d,i,n,S,ans,op1,op2,op3,k,diff,cs;
  pair<ll,ll> x,y,z;
  cin>>t;
  while(t--)
  {
    cin>>n>>S;
    sum=0;
    m.clear();
    c.clear();
    i=1;
    while(i<=n)
    {
      a[i].clear();
      i++;
    }
    i=0;
    while(i<n-1)
    {
      cin>>l>>r>>w>>d;
      a[l].pb(r);
      a[r].pb(l);
      m[{l,r}]=w;
      c[{l,r}]=d;
      c[{r,l}]=d;
      i++;
    }
    cs=0;
    while(!s.empty())
      s.pop();
    while(!o.empty())
      o.pop();
    dfs(1,-1);
    k=1;
    diff=max(0ll,sum-S);
    while(!s.empty())
    {
      x=s.top();
      b[k]=x.ff*(x.ss-x.ss/2);
      cs+=b[k];
      if(k==10000000||cs>=diff+100)
        {
            k++;
            break;
        }
      k++;
      s.pop();
      if(x.ss/2)
      s.push({x.ff,x.ss/2});
    }
    i=1;
    sum=0;
    while(i<k&&sum<diff)
    {
      sum+=b[i];
      i++;
    }
    i--;
    //deb(i)
    if(sum>=diff)
      ans=i;
    else
      ans=LLONG_MAX;
    k=0;
    while(!o.empty())
    {
      k++;
      x=o.top();
      sum+=x.ff*(x.ss-x.ss/2);
      while(i>-1&&sum>=diff)
      {
        ans=min(ans,1ll<<30);
        sum-=b[i];
        i--;
      }
      if(ans!=LLONG_MAX)
        ans=min(ans,2*k+i+1);
      o.pop();
      if(x.ss/2)
        o.push({x.ff,x.ss/2});
    }
    deb(ans)
  }
}