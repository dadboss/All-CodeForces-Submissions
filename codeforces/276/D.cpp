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
  ll l,r;
  cin>>l>>r;
  if(l==r)
  {
  	cout<<0;
  	return 0;
  }
  bitset<63> a(l),b(r),ans;
  ll i=63;
  while(i>-1&&a[i]==b[i])
  {
  	ans[i]=0;
  	i--;
  }
  while(i>-1)
  {
  	ans[i]=1;
  	i--;
  }
  cout<<ans.to_ullong();
}