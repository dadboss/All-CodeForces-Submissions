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
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,k;
  cin>>n>>k;
  pair<ll,ll> p[n];
  ll i=0;
  while(i<n)
  {
  	cin>>p[i].ff>>p[i].ss;
  	i++;
  }
  sort(p,p+n);
  i=0;
  ll st=0,sum=0,mx=0;
  while(i<n)
  {
  	if(p[i].ff-p[st].ff>=k)
  	{
  		sum-=p[st].ss;
  		st++;
  		i--;
  	}
  	else
  	{
  		sum+=p[i].ss;
  		mx=max(sum,mx);
  	}
  	i++;
  }
  deb(mx);
}