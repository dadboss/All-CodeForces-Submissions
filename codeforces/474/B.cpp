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
ll a[1000009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,d,i,c=0;
  cin>>n;
  a[1]=1;
  ll mx=LLONG_MIN;
  while(n--)
  {
  	cin>>d;
  	d+=c;
  	c=d;
  	mx=max(mx,d);
  	a[d+1]++;
  }
  i=1;
  while(i<=mx)
  {
  	a[i]+=a[i-1];
  	i++;
  }
  ll q;
  cin>>q;
  while(q--)
  {
  	cin>>n;
  	deb(a[n]);
  }
}