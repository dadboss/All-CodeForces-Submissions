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
#define N 800009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
#define INF 1e15
ll a[N],lazy[N],t[N];
void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        t[v]=a[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        t[v]=min(t[2*v],t[2*v+1]);
    }
}
void push(ll v) {
    t[v*2] += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1] += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(ll v, ll tl, ll tr, ll l, ll r, ll addend) {
    if (l > r) 
        return;
    if (l == tl && tr == r) {
        t[v] += addend;
        lazy[v] += addend;
    } else {
        push(v);
        ll tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm), addend);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, addend);
        t[v] = min(t[v*2], t[v*2+1]);
    }
}

ll query(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r)
        return INF;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    ll tm = (tl + tr) / 2;
    return min(query(v*2, tl, tm, l, min(r, tm)), 
               query(v*2+1, tm+1, tr, max(l, tm+1), r));
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l,r,val;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  build(1,1,n);
  ll q;
  cin>>q;
  cin.ignore();
  string s,wrd;
  while(q--)
  {
    getline(cin,s);
    stringstream S(s);
    l=r=val=-INF;
    ll ct=0;
    while(S>>wrd)
    {
      ct++;
      if(l==-INF)
        l=stoll(wrd);
      else if(r==-INF)
        r=stoll(wrd);
      else
        {
          //NO
          val=stoll(wrd);
          //deb(val)
        }
    }
    l++;
    r++;
    //deb(ct)
    //Deb(l,r,val)
    if(val==-INF)
    {
      if(r<l)
        deb(min(query(1,1,n,1,r),query(1,1,n,l,n)))
      else
        deb(query(1,1,n,l,r))
    }
    else
    {
      if(r<l)
      {
        update(1,1,n,1,r,val);
        update(1,1,n,l,n,val);
      }
      else
        update(1,1,n,l,r,val);
    }
  }
}