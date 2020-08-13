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
ll a[209],b[209];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,i=0,j,x,y,mn,mx;
  cin>>n>>m;
  while(i<n)
    cin>>a[i++];
  i=0;
  while(i<m)
    cin>>b[i++];
  ll ans=0;
  while(1)
  {
    i=0;
    mx=0;
    while(i<n)
    {
      j=0;
      mn=a[i]&b[j];
      while(j<m)
      {
        mn=min(mn,a[i]&b[j]);
        j++;
      }
      mx=max(mx,mn);
      //Deb(i,mn,mx);
      i++;
    }
    if(mx==0)
        break;
    x=31-__builtin_clz(mx);
    y=1<<x;
    i=0;
    while(i<m)
    {
      if((b[i]>>x)&1)
        b[i]-=y;
        //deB(i,b[i])
      i++;
    }
    ans+=y;
  }
  deb(ans)
}
