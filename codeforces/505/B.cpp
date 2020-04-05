 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define mp make_pair
 #define pb push_back
 #define ff first
 #define ss second
 #define deb(x) cout<<x<<"\n";
 #define deB(x,y) cout<<x<<" "<<y<<"\n";
 #define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
 #define OK cout<<"OK";
 vector<pair<ll,ll>> co[200];
 ll ctr;
 void dfs(ll n,vector<ll> a[200],ll p,ll* v)
 {
     if(v[n])
        return;
    v[n]++;
     for(auto x:a[n])
     {
         if(x!=p)
            dfs(x,a,n,v);
     }
 }
 ll m;
 ll ans(ll l,ll r)
 {
     ll i=1;
     while(i<=m)
     {
         vector<ll> a[200];
         for(auto x:co[i])
         {
             a[x.ff].pb(x.ss);
             a[x.ss].pb(x.ff);
         }
         ll v[200]={};
         dfs(l,a,-1,v);
         if(v[r])
            ctr++;
        i++;
     }
     return ctr;
 }
 int main()
 {
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     ll n,l,r,c,q;
     cin>>n>>m;
     ll i=0;
     while(i<m)
     {
         cin>>l>>r>>c;
         co[c].pb({l,r});
         i++;
     }
     cin>>q;
     while(q--)
     {
         ctr=0;
         cin>>l>>r;
         deb(ans(l,r));
     }
 }
