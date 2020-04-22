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
ll a[200009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,k,n,mx;
  cin>>t;
  while(t--)
  {
  	cin>>n>>k;
  	i=0;
  	while(i<n)
  		cin>>a[i++];
  	ll f[2*k+2]={};
  	f[1]=n;
  	i=0;
  	j=n-1;
  	while(i<j)
  	{
  		f[a[i]+a[j]]--;
  		f[a[i]+a[j]+1]++;
  		f[1+min(a[i],a[j])]--;
  		f[k+1+max(a[i],a[j])]++;
  		i++;
  		j--;
  	}
  	i=2;
  	mx=LLONG_MAX;
  	while(i<=2*k)
  	{
  		f[i]+=f[i-1];
  		mx=min(mx,f[i]);
  		i++;
  	}
  	deb(mx);
  }
}