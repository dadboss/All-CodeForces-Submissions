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
  ll n,w,d,temp,cs=0;
  cin>>n>>w;
  ll mn=0,mx=w;
  while(n--)
  {
    cin>>d;
    temp=d;
    if(d>0)
    {
      if(mx+cs+d>w)
      {
       // YES
        mx=mx-(mx+cs+d-w);
      }
    }
    else
    {
      d*=-1;
      if(mn+cs-d<0)
      {
        mn+=0-(mn+cs-d);
      }
    }
    cs+=temp;
    if(abs(cs)>w)
    {
      deb(0)
      return 0;
    }
    //Deb(cs,mn,mx);
  }
  deb(max(0ll,mx-mn+1))
}