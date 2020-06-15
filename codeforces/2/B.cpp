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
  pair<ll,ll> qw(ll n)
  {
    if(n==0)
    {
      return {1e10,1e10};
    }
    ll c=0,f=0;
    while(n%2==0)
    {
      n/=2;
      c++;
    }
    while(n%5==0)
    {
      n/=5;
      f++;
    }
    return {c,f};
  }
  struct node
  {
    ll t,f;
    char tch='R',fch='R';
  };
  node dp[1009][1009];
  ll a[1009][1009];
  int main()
  {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,xw=0,yw=0;
    cin>>n;
    ll i=1,j;
    while(i<=n)
    {
      j=1;
      while(j<=n)
      {
        cin>>a[i][j];
        if(a[i][j]==0)
        {
          xw=i;
          yw=j;
        }
        j++;
      }
      i++;
    }
    pair<ll,ll> temp=qw(a[1][1]);
    dp[1][1].t=temp.ff;
    dp[1][1].f=temp.ss;
    i=2;
    while(i<=n)
    {
      temp=qw(a[1][i]);
      dp[1][i].t=dp[1][i-1].t+temp.ff;
      dp[1][i].f=dp[1][i-1].f+temp.ss;
      temp=qw(a[i][1]);
      dp[i][1].t=dp[i-1][1].t+temp.ff;
      dp[i][1].f=dp[i-1][1].f+temp.ss;
      dp[i][1].tch=dp[i][1].fch='D';
      i++;
    }
    i=2;
    while(i<=n)
    {
      j=2;
      while(j<=n)
      {
        temp=qw(a[i][j]);
        if(dp[i-1][j].t<dp[i][j-1].t)
        {
          dp[i][j].t=dp[i-1][j].t+temp.ff;
          dp[i][j].tch='D';
        }
        else
        {
          dp[i][j].t=dp[i][j-1].t+temp.ff;
        }
        if(dp[i-1][j].f<dp[i][j-1].f)
        {
          dp[i][j].f=dp[i-1][j].f+temp.ss;
          dp[i][j].fch='D';
        }
        else
          dp[i][j].f=dp[i][j-1].f+temp.ss;
        j++;
      }
      i++;
    }
    if(xw&&min(dp[n][n].t,dp[n][n].f)>1)
    {
      deb(1)
      i=1;
      while(i<yw)
      {
        cout<<'R';
        i++;
      }
      i=1;
      while(i<xw)
      {
        cout<<'D';
        i++;
      }
      i=yw+1;
      while(i<=n)
      {
        cout<<'R';
        i++;
      }
      i=xw+1;
      while(i<=n)
      {
        cout<<'D';
        i++;
      }
      return 0;
    }
    vector<char> v;
    deb(min(dp[n][n].t,dp[n][n].f))
    if(min(dp[n][n].t,dp[n][n].f)==dp[n][n].t)
    {
      i=n;
      j=n;
      while(i!=1||j!=1)
      {
        v.pb(dp[i][j].tch);
        if(dp[i][j].tch=='D')
          i--;
        else
          j--;
      }
    }
    else
    {
      i=n;
      j=n;
      while(i!=1||j!=1)
      {
        v.pb(dp[i][j].fch);
        if(dp[i][j].fch=='D')
          i--;
        else
          j--;
      } 
    }
    reverse(all(v));
    for(auto x:v)
      cout<<x;
  }