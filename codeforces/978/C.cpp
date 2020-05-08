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
  ll n,m;
  cin>>n>>m;
  ll i=1,a[n+1];
  a[0]=0;
  while(i<=n)
  {
  	cin>>a[i];
  	a[i]+=a[i-1];
  	i++;
  }
  ll u,d;
  while(m--)
  {
  	cin>>d;
  	u=lower_bound(a+1,a+n+1,d)-a;
  	deB(u,d-a[u-1]);
  }
}