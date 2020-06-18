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
ll n,d[200009],r[200009];
pair<ll,ll> f(ll mid)
{
  ll i=0;
  while(i<n)
  {
    //deb(mid)
    if(d[i]==1&&mid<1900)
      return {0,0};
    if(d[i]==2&&mid>1899)
      return {-1,0};
    mid+=r[i];
    i++;
  }
  return {1,mid};
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>n;
  ll i=0,m=0;
  while(i<n)
  {
    cin>>r[i]>>d[i];
    if(d[i]==2)
      m++;
    i++;
  }
  if(m==0)
  {
    deb("Infinity")
    return 0;
  }
  ll s=-1e15,e=1e15,mid,ans,ctr=0;
  while(s<=e)
  {
    //deB(s,e)
    mid=(s+e)/2;
   // deb(mid)
    pair<ll,ll> q=f(mid);
    if(q.ff==1)
    {
      ctr=1;
      ans=q.ss;
      s=mid+1;
    }
    else if(q.ff==0)
      s=mid+1;
    else
      e=mid-1;
  }
  if(ctr==0)
    deb("Impossible")
  else 
    deb(ans)
}