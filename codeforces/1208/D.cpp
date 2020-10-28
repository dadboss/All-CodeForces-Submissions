#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
#define int ll
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
pi t[4*N];
ll a[N],lazy[4*N],ans[N];
void build( int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = {a[tl],tl};
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        //t[v] = t[v*2] + t[v*2+1];
        if(t[v*2].ff<t[v*2+1].ff||(t[v*2].ff==t[v*2+1].ff&&t[v*2].ss>t[v*2+1].ss))
          t[v]=t[v*2];
        else
          t[v]=t[v*2+1];
    }
}
void push(int v) {
    t[v*2].ff += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1].ff += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(int v, int tl, int tr, int l, int r, int addend) {
    if (l > r) 
        return;
    if (l == tl && tr == r) {
        t[v].ff += addend;
        lazy[v] += addend;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm), addend);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, addend);
        if(t[v*2].ff<t[v*2+1].ff||(t[v*2].ff==t[v*2+1].ff&&t[v*2].ss>t[v*2+1].ss))
          t[v]=t[v*2];
        else
          t[v]=t[v*2+1];
    }
}
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  build(1,1,n);
  //deb(t[1].ss)
  i=1;
  ll x;
  while(i<=n)
  {
    x=t[1].ss;
    ans[x]=i;
    update(1,1,n,x+1,n,-i);
    //deB(t[1].ff,t[1].ss)
    update(1,1,n,x,x,1e13);
    //deB(t[1].ff,t[1].ss)
    i++;
  }
  i=1;
  while(i<=n)
  {
    cout<<ans[i]<<" ";
    i++;
  }
}