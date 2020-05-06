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
ll a[100000];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
  ll i=1;
  a[0]=0;
  while(i*(3*i+1)/2<=1000000000)
  {
  	a[i]=i*(3*i+1)/2;
  	i++;
  }
  a[i]=LLONG_MAX;
  a[i+1]=LLONG_MAX;
  a[i+2]=LLONG_MAX;
  ll ct,t,n;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	ct=0;
  	while(n>1){
  	i=0;
  	while(a[i]<=n)
  		i++;
  	i--;
  	ll x=n/a[i];
  	ct+=x;
  	n%=a[i];
  	//deB(i,n);
  }
  deb(ct);
  }
}