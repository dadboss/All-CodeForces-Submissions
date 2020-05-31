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
set<ll> a[100009];
ll c[100009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,l,r;
  cin>>n>>m;
  ll i=1;
  set<ll> s;
  while(i<=n)
  	{
  		cin>>c[i];
  		s.insert(c[i]);
  		i++;
  	}
  while(m--)
  {
  	cin>>l>>r;
    if(c[l]!=c[r]){
  	a[c[l]].insert(c[r]);
  	a[c[r]].insert(c[l]);
  }
  }
  ll mx=*s.begin();
  for(auto it:s)
  {
  	if(a[it].size()>a[mx].size())
      mx=it;
  }
  deb(mx);
}