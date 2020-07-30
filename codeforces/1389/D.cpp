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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,k,l,r,L,R,x,ans,val;
  cin>>t;
  pair<ll,ll> p[2];
  while(t--)
  {
    cin>>n>>k>>p[0].ff>>p[0].ss>>p[1].ff>>p[1].ss;
    ans=0;
    sort(p,p+2);
    l=p[0].ff;
    r=p[0].ss;
    L=p[1].ff;
    R=p[1].ss;
    if(r>=L)
    {
      x=min(r,R)-L;
      if(n*x>=k)
      {
        deb(0)
        continue;
      }
      k-=n*x;
      x=2*max(r,R)-r-R+L-l;
      if(x*n>=k)
      {
        deb(k)
        continue;
      }
      k-=n*x;
      deb(n*x+2*k);
      continue;
    }
    else
    {
      x=R-l;
      val=R-r+L-l;
      if(x*n>=k)
      {
        ans=k/x*val;
        k%=x;
        if(ans)
          ans+=min(2*k,val-(R-l-k));
        else
          ans+=val-(R-l-k);
        deb(ans)
        continue;
      }
      ans=n*val;
      k-=n*x;
      deb(ans+2*k)
    }
  }
}