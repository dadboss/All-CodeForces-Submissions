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
  ll n,k;
  cin>>n>>k;
  ll a[n],i=0;
  while(i<n)
  	cin>>a[i++];
  ll sum=0,st=0,mx=0;
  i=0;
  while(i<n)
  {
  	if(sum+a[i]>k)
  	{
  		sum-=a[st];
  		st++;
  		i--;
  	}
  	else
  	{
  		sum+=a[i];
  		mx=max(mx,i-st+1);
  	}
  	i++;
  }
  deb(mx);
}