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
  ll n,a,b;
  cin>>n>>a>>b;
  ll ans,mid,s=1,e=(a+b)/n;
  while(s<=e)
  {
  	mid=(s+e)/2;
  	if(a/mid&&b/mid&&a/mid+b/mid>=n)
  	{
  		ans=mid;
  		s=mid+1;
  	}
  	else
  		e=mid-1;
  }
  deb(ans);
}