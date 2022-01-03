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
 #define N 100009
 pi t[4*N],a[N];
 void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v].ff = new_val;
        t[v].ss=pos;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        if(t[v+v].ff>=t[v+v+1].ff)
          t[v]=t[v+v];
        else
          t[v]=t[v+v+1];
    }
}
 pi sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return {0,0};
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    pi a=sum(v*2, tl, tm, l, min(r, tm));
           pi b= sum(v*2+1, tm+1, tr, max(l, tm+1), r);
    if(a.ff>=b.ff)
      return a;
    return b;
}
ll ind[N],parent[N];
ll bestv,s,ix,e,ans,m,bestind,abhitak,IND;
 int main()
 {
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif
     pi p;
    ll n,d;
    cin>>n>>d;
    ll i=1;
    while(i<=n)
    {
      cin>>a[i].ff;
      a[i].ss=i;
      i++;
    }
    sort(a+1,a+n+1);
    i=1;
    while(i<=n)
    {
      ind[a[i].ss]=i;
      i++;
    }
    i=1;
    while(i<=n)
    {
      bestv=0;
      s=1;
      ix=ind[i];
      e=ix-1;
      ans=-1;
      while(s<=e)
      {
        m=(s+e)/2;
        if(a[ix].ff-a[m].ff>=d)
          ans=m,s=m+1;
        else
          e=m-1;
      }
      if(ans!=-1)
      {
        p=sum(1,1,n,1,ans);
        if(p.ff)
          bestv=p.ff,bestind=p.ss;
      }
      ans=-1;
      s=ix+1;
      e=n;
      while(s<=e)
      {
        m=(s+e)/2;
        if(-a[ix].ff+a[m].ff>=d)
          ans=m,e=m-1;
        else
          s=m+1;
      }
      if(ans!=-1)
      {
        p=sum(1,1,n,ans,n);
        if(p.ff>bestv)
          bestv=p.ff,bestind=p.ss;
      }
      if(bestv)
        parent[ix]=bestind;
      bestv++;
      if(bestv>abhitak)
      {
        abhitak=bestv;
        IND=ix;
      }
      update(1,1,n,ix,bestv);
      i++;
    }
    deb(abhitak)
    vi v;
    while(IND)
    {
      v.pb(IND);
      IND=parent[IND];
    }
    while(!v.empty())
      cout<<a[v.back()].ss<<" ",v.pop_back();
 }         