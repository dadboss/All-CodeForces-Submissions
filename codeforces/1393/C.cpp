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
  ll t,i,ans,st,e,mid,mx,n,d,fr;
  cin>>t;
  while(t--)
  {
    map<ll,ll> m;
    cin>>n;
    i=mx=0;
    while(i<n)
    {
      cin>>d;
      m[d]++;
      if(m[d]>mx)
      {
        mx=m[d];
        fr=1;
      }
      else if(m[d]==mx)
        fr++;
      i++;
    }
    st=0;
    e=n/mx+5000000;
    //deb(fr)
    while(st<=e)
    {
      mid=(st+e)/2;
      //deb(mid)
      if(1+(mid+1)*(mx-1)+fr-1<=n)  
      {
        ans=mid;
        st=mid+1;
      }
      else
        e=mid-1;
    }
    deb(ans)
  }
}