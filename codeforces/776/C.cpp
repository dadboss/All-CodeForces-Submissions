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
ll a[100009];
map<ll,ll> m;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k,x;
  cin>>n>>k;
  ll i=0,tot=0;
  while(i<n)
  {
    cin>>a[i];
    tot+=a[i];
    m[tot]++;
    i++;
  }
  i=0;
  ll ans=0,sum=0,w;
  while(i<n)
  {
    x=1;
    w=0;
    while(w<60&&abs(x)<1e16)
    {
      if(m.find(sum+x)!=m.end())
        ans+=m[sum+x];
      w++;
      x*=k;
      if(k==1)
        break;
      if(k==-1&&w==2)
        break;
    }
    //deB(i,ans)
    sum+=a[i];
    m[sum]--;
    i++;
  }
  deb(ans)
}