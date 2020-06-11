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
  ll t,l,r,n,x,m,lx,rx;
  cin>>t;
  while(t--)
  {
    cin>>n>>x>>m;
    lx=rx=x;
    while(m--)
    {
      cin>>l>>r;
      if((rx<=r&&rx>=l)||(lx>=l&&lx<=r)||l>=lx&&r<=rx)
      {
        //YES
        lx=min(l,lx);
        rx=max(r,rx);
      }
      //deB(lx,rx);
    }
    deb(rx-lx+1);
  }
}