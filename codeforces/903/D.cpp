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
#define N 200009
pi a[N];
pi t[4*N];
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v].ff = new_val;
        t[v].ss=1;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v].ff = t[v*2].ff + t[v*2+1].ff;
        t[v].ss = t[v*2].ss + t[v*2+1].ss;
    }
}
pi sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return {0,0};
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    pi o= sum(v*2, tl, tm, l, min(r, tm));
           pi i= sum(v*2+1, tm+1, tr, max(l, tm+1), r);
    return {o.ff+i.ff,o.ss+i.ss};
}
int main()
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
  {
    cin>>a[i].ff;
    a[i].ss=i;
    i++;
  }
  sort(a+1,a+n+1);
  ll j=1;
  i=1;
  pi p;
  long double ans=0;
  while(i<=n)
  {
    while(a[j].ff+1<a[i].ff)
    {
      update(1,1,n,a[j].ss,a[j].ff);
      j++;
    }
    p=sum(1,1,n,1,a[i].ss-1);
    //Deb(i,p.ff,p.ss)
    ans+=p.ss*a[i].ff-p.ff;
    p=sum(1,1,n,a[i].ss+1,n);
    //Deb(i,p.ff,p.ss)
    ans+=p.ff-p.ss*a[i].ff;
    //deb(ans)
    i++;
  }
  cout<<fixed<<setprecision(0)<<ans;
}    