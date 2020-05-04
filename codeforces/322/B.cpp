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
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans=a/3+b/3+c/3+min({a%3,b%3,c%3});
  if(min({a,b,c}))
  {
  	a--;
  	b--;
  	c--;
  	ans=max(ans,1+a/3+b/3+c/3+min({a%3,b%3,c%3}));
  }
  if(min({a,b,c}))
  {
  	a--;
  	b--;
  	c--;
  	ans=max(ans,1+a/3+b/3+c/3+min({a%3,b%3,c%3}));	
  }
  deb(ans);
}