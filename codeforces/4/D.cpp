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
vector<ll> a[5009];
bool cmp(vector<ll> b,vector<ll> c)
{
  if(b[0]!=c[0])
    return b[0]<c[0];
  return b[1]<c[1];
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,w,h,l,r;
  cin>>n>>w>>h;
  ll i=0;
  while(i<=n)
  {
    a[i].resize(6);
    a[i][4]=-1;
    a[i][3]=1;
    i++;
  }
  ll k=0,ma=0;
  i=1;
  while(i<=n)
  {
    cin>>l>>r;
    if(l>w&&r>h)
    {
      a[k][0]=l;
      a[k][1]=r;
      a[k][2]=i;
      k++;
    }
    i++;
  }
  if(k==0)
  {
    deb(0)
    return 0;
  }
  sort(a,a+k,cmp);
  i=0;
  ll j,mx;
  while(i<k)
  {
    //Deb(a[i][0],a[i][1],a[i][2]);
    j=i-1;
    mx=0;
    while(j>-1)
    {
      if(a[i][0]>a[j][0]&&a[i][1]>a[j][1])
      {
        mx=max(mx,1+a[j][3]);
      }
      j--;
    }
    //deb(mx)
    if(mx)
    {
      j=i-1;
      while(j>-1)
      {
        if(a[j][3]==mx-1&&a[i][0]>a[j][0]&&a[i][1]>a[j][1])
          break;
        j--;
      }
      a[i][3]=mx;
      a[i][4]=j;
    }
    ma=max(a[i][3],ma);
    i++;
  }
  i=0;
  while(i<k)
  {
    if(a[i][3]==ma)
      break;
    i++;
  }
  deb(a[i][3]);
  vector<ll> v;
  v.pb(i);
  while(a[i][4]!=-1)
  {
    v.pb(a[i][4]);
    i=a[i][4];
  }
  reverse(all(v));
  for(auto x:v)
    cout<<a[x][2]<<" ";
}