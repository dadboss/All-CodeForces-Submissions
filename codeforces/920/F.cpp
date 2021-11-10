#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 1000009
#define int ll
ll d[N],c[N],t[4*N];
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}
vi v;
set<ll> s;
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll i=1,j;
  while(i<=1000000)
  {
    j=i;
    while(j<=1000000)
    {
      d[j]++;
      j+=i;
    }
    i++;
  }
  auto it=s.begin();
  ll n,m,x,l,r;
  cin>>n>>m;
  i=1;
  while(i<=n)
  {
    cin>>c[i];
    s.insert(i);
    update(1,1,n,i,c[i]);
    i++;
  }
  while(m--)
  {
    cin>>x>>l>>r;
    if(x==2)
      deb(sum(1,1,n,l,r))
    else
    {
      v.clear();
      it=s.lower_bound(l);
      while(it!=s.end()&&*it<=r)
      {
        i=*it;
        update(1,1,n,i,d[c[i]]);
        c[i]=d[c[i]];
        if(c[i]<3)
          v.pb(i);
        it++;
      }
      for(auto x:v)
        s.erase(x);
    }
  }
}         