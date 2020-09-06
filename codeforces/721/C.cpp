  #include<bits/stdc++.h>
  //#include <ext/pb_ds/assoc_container.hpp>
  //using namespace __gnu_pbds;
  using namespace std;
  #define ll int
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
  #define N 5009
  //typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

  ll dp[N][N],par[N][N];
  struct ed
  {
    ll l,r,w;
  };
  int main()
  {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,m,t,l,r,w,i,j;
    cin>>n>>m>>t;
    vector<ed> v;
    while(m--)
    {
      cin>>l>>r>>w;
      v.pb({l,r,w});
    }
    i=0;
    while(i<N)
    {
      j=0;
      while(j<N)
      {
        dp[i][j]=t+1;
        j++;
      }
      i++;
    }
    dp[1][1]=0;
    i=2;
    while(i<=n)
    {
      for(auto x:v)
      {
        if(dp[x.r][i]>dp[x.l][i-1]+x.w)
        {
          //Deb(x.l,x.r,x.w)
          dp[x.r][i]=dp[x.l][i-1]+x.w;
          par[x.r][i]=x.l;
        }
      }
      i++;
    }/*
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=n)
      {
        Deb(i,j,par[i][j]);
        j++;
      }
      i++;
    }*/
    i=n;
    while(i>-1)
    {
      if(dp[n][i]<=t)
        break;
      i--;
    }
    deb(i);
    vi ans;
    ans.pb(n);
    while(n!=1)
    {
      ans.pb(par[n][i]);
      n=par[n][i];
       i--;
    }
    reverse(all(ans));
    for(auto x:ans)
      cout<<x<<" ";
  }