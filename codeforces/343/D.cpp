#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#define int long long
#include<iomanip>
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
#define NW 500009
template<int size, int lg, typename seg_t = long long>
struct hld {
  vector<int> edges[size];
  int bigchild[size];
  int sz[size];
  int depth[size];
  int chain[size];
  int label[size], label_time;
  int par[size];
 
  int lca_lift[size][lg];
 
  seg_t seg_tree[4 * size];
  seg_t seg_lazy[4 * size];
 
  int N;
 
  /* ----------- segment tree ----------- */ 
 
  /* CHANGE THIS SECTION BY PROBLEM */
  inline seg_t seg_combine(seg_t a, seg_t b) {
    return max(a,  b);
  }
 
  inline seg_t seg_lazy_apply(seg_t lazy_val, seg_t new_val) {
    return new_val;
  }
 
  inline seg_t seg_lazy_func(seg_t cur_val, seg_t lazy_val, int l, int r) {
    return lazy_val;
  }
 
  const seg_t seg_sentinel = 0;
  const seg_t seg_lazy_sentinel = -1;
  const seg_t seg_init_val = 0;
  /* END SECTION */
 
  seg_t seg_query_header(int l, int r) {
    return seg_query_rec(0, 0, N - 1, l, r);
  }
 
  seg_t seg_query_rec(int i, int tl, int tr, int ql, int qr) {
    seg_eval_lazy(i, tl, tr);
 
    if (ql <= tl && tr <= qr) return seg_tree[i];
    if (tl > tr || tr < ql || qr < tl) return seg_sentinel;
 
    int mid = (tl + tr) / 2;
    seg_t a = seg_query_rec(2 * i + 1, tl, mid, ql, qr);
    seg_t b = seg_query_rec(2 * i + 2, mid + 1, tr, ql, qr);
    return seg_combine(a, b);
  }
 
  void seg_update_header(int l, int r, seg_t v) {
    seg_update_rec(0, 0, N - 1, l, r, v);
  }
 
  seg_t seg_update_rec(int i, int tl, int tr, int ql, int qr, seg_t v) {
    seg_eval_lazy(i, tl, tr);
 
    if (tl > tr || tr < ql || qr < tl) return seg_tree[i];
    if (ql <= tl && tr <= qr) {
      seg_lazy[i] = seg_lazy_apply(seg_lazy[i], v);
      seg_eval_lazy(i, tl, tr);
      return seg_tree[i];
    }
    if (tl == tr) return seg_tree[i];
 
    int mid = (tl + tr) / 2;
    seg_t a = seg_update_rec(2 * i + 1, tl, mid, ql, qr, v);
    seg_t b = seg_update_rec(2 * i + 2, mid + 1, tr, ql, qr, v);
    return seg_tree[i] = seg_combine(a, b);
  }
 
  void seg_eval_lazy(int i, int l, int r) {
    if (seg_lazy[i] == seg_lazy_sentinel) return;
 
    seg_tree[i] = seg_lazy_func(seg_tree[i], seg_lazy[i], l, r);
 
    if (l != r) {
      seg_lazy[i * 2 + 1] = seg_lazy_apply(seg_lazy[i * 2 + 1], seg_lazy[i]);
      seg_lazy[i * 2 + 2] = seg_lazy_apply(seg_lazy[i * 2 + 2], seg_lazy[i]);
    }
 
    seg_lazy[i] = seg_lazy_sentinel;
  }
 
  /* ----------- init phase 1 ----------- */
  /* initialize segtree, clear edges, etc. */
 
  void init_arrays(int n) {
    // everything not initialized doesn't need to be
    N = n;
    for (int i = 0; i < N; i++) {
      edges[i].clear();
      chain[i] = i;
    }
 
    for (int i = 0; i < 4 * N; i++) {
      seg_tree[i] = seg_init_val;
      seg_lazy[i] = seg_lazy_sentinel;
    }
  }
 
  /* ----------- init phase 2 ----------- */
  /* put edges in */
 
  void add_edge(int u, int v) {
    edges[u].push_back(v);
    edges[v].push_back(u);
  }
 
  /* ----------- init phase 3 ----------- */
  /* build the lca and hld stuff */
 
  void init_tree(seg_t* arr, int root = 0) {
    // lca
    lca_dfs(root, -1);
 
    // size, compute biggest children
    dfs_size(root, -1, 0);
 
    // compute chains
    dfs_chains(root, -1);
 
    // label nodes
    label_time = 0;
    dfs_labels(arr, root, -1);
  }
 
  void lca_dfs(int v, int par) {
    lca_lift[v][0] = par;
 
    for (int i = 1; i < lg; i++) {
      if (lca_lift[v][i - 1] == -1) lca_lift[v][i] = -1;
      else lca_lift[v][i] = lca_lift[lca_lift[v][i - 1]][i - 1];
    }
 
    for (int x: edges[v]) {
      if (x != par) {
        lca_dfs(x, v);
      }
    }
  }
 
  void dfs_size(int v, int p, int d) {
    sz[v] = 1;
    depth[v] = d;
    par[v] = p;
    int bigc = -1, bigv = -1;
 
    for (int x: edges[v]) {
      if (x != p) {
        dfs_size(x, v, d + 1);
        sz[v] += sz[x];
        if (sz[x] > bigv) {
          bigc = x;
          bigv = sz[x];
        }
      }
    }
 
    bigchild[v] = bigc;
  }
 
  void dfs_chains(int v, int p) {
    if (bigchild[v] != -1) {
      chain[bigchild[v]] = chain[v];
    }
 
    for (int x: edges[v]) {
      if (x != p) {
        dfs_chains(x, v);
      }
    }
  }
 
  void dfs_labels(seg_t* arr, int v, int p) {
    label[v] = label_time++;
    seg_update_header(label[v], label[v], arr[v]);
 
    if (bigchild[v] != -1) {
      dfs_labels(arr, bigchild[v], v);
    }
 
    for (int x: edges[v]) {
      if (x != p && x != bigchild[v]) {
        dfs_labels(arr, x, v);
      }
    }
  }
 
  /* ----------- init phase 4 ----------- */
  /* usage */
 
  int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);
    int d = depth[a] - depth[b];
    int v = get_kth_ancestor(a, d);
    if (v == b) {
      return v;
    } else {
      for (int i = lg - 1; i >= 0; i--) {
        if (lca_lift[v][i] != lca_lift[b][i]) {
          v = lca_lift[v][i];
          b = lca_lift[b][i];
        }
      }
      return lca_lift[b][0];
    }
  }
 
  int get_kth_ancestor(int v, int k) {
    for (int i = lg - 1; i >= 0; i--) {
      if (v == -1) return v;
      if ((1 << i) <= k) {
        v = lca_lift[v][i];
        k -= (1 << i);
      }
    }
    return v;
  }
 
  /* excludes p */
  seg_t query_chain(int v, int p) {
    seg_t val = seg_sentinel;
    while (depth[p] < depth[v]) {
      int top = chain[v];
      if (depth[top] <= depth[p]) {
        int diff = depth[v] - depth[p];
        top = get_kth_ancestor(v, diff - 1);
      }
      val = seg_combine(val, seg_query_header(label[top], label[v]));
      v = par[top];
    }
    return val;
  }
 
  seg_t query(int u, int v) {
    int lc = lca(u, v);
    seg_t val = seg_combine(query_chain(u, lc), query_chain(v, lc));
    return seg_combine(val, seg_query_header(label[lc], label[lc]));
  }
 
  /* excludes p */
  void update_chain(int v, int p, seg_t val) {
    while (depth[p] < depth[v]) {
      int top = chain[v];
      if (depth[top] <= depth[p]) {
        int diff = depth[v] - depth[p];
        top = get_kth_ancestor(v, diff - 1);
      }
      seg_update_header(label[top], label[v], val);
      v = par[top];
    }
  }
 
  void update(int u, int v, seg_t val) {
    int lc = lca(u, v);
    update_chain(u, lc, val); 
    update_chain(v, lc, val);
    seg_update_header(label[lc], label[lc], val);
  }
};
 
 
hld<500005, 20, ll> h;
ll a[500009];

vi g[NW];
ll T,s[NW],e[NW];
ll t[8*NW];
void dfs(ll n,ll p)
{
    s[n]=T;
    T++;
    for(auto x:g[n])
        if(x!=p)
            dfs(x,n);
    e[n]=T;
    T++;
}
void build( int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = 1;
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        t[v] = max(t[v*2] , t[v*2+1]);
    }
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
        t[v] =max( t[v*2] , t[v*2+1]);
    }
}
ll op;
int sum(int v, int tl, int tr, int l, int r) {
    /*cout<<"sdf";
    op++;
    if(op==10)
    exit(0);*/
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    //cout<<tm<<" ";
    return max(sum(v*2, tl, tm, l, min(r, tm))
           , sum(v*2+1, tm+1, tr, max(l, tm+1), r));
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
  h.init_arrays(n);
  ll i=n-1,l,r;
  while(i--)
  {
    cin>>l>>r;
    l--;
    r--;
    h.add_edge(l,r);
    g[l].pb(r);
    g[r].pb(l);
  }
  h.init_tree(a);
  T=1;
  dfs(0,-1);
  build(1,0,n+n);
  ll m;
  cin>>m;
  i=2;
  ll x;
  while(m--)
  {
    cin>>l>>r;
    r--;
    if(l==1)
    {
        h.update(r,r,i);
    }
    else if(l==2)
    {
        update(1,0,n+n,s[r],i);
    }
    else
    {
        l=h.query(0,r);
        x=sum(1,0,n+n,s[r],e[r]);
        //deB(s[r],e[r])
        deb((l>x))
    }
    i++;
  }
}        