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
ll a[200009],b[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  while(i<m)
    cin>>b[i++];
  i=n-2;
  multiset<ll> s;
  s.insert(a[n-1]);
  while(i>-1)
  {
    a[i]=min(a[i],a[i+1]);
    s.insert(a[i]);
    i--;
  }
  if(a[0]!=b[0])
  {
    deb(0)
    return 0;
  }
  i=1;
  ll ans=1;
  while(i<m)
  {
   //   deb(s.count(b[i]));
    ans*=s.count(b[i]);
    ans%=998244353;
    i++;
  }
  deb(ans)
}