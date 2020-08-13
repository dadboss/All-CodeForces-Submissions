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
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<
ll,
null_type,
less<ll>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
ll a[1000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ordered_set s,d;
  ll n,i,x,y;
  cin>>n;
  i=0;
  ll ans=0;
  while(i<n)
  {
      cin>>a[i];
      s.insert(a[i]);
      i++;
  }
  i=n-1;
  while(i>-1)
  {
      d.insert(a[i]);
      x=s.order_of_key(a[i]);
      x=i-x;
      y=d.order_of_key(a[i]);
      ans+=y*x;
      s.erase(a[i]);
      i--;
  }
  deb(ans)
}