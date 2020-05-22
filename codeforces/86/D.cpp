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
#define blk 1000
struct qu
{
	ll l,r,ind;
};
bool cmp(qu a,qu b)
{
	if(a.l/blk!=b.l/blk)
		return a.l/blk<b.l/blk;
	return a.r>b.r;
}
ll a[200009],fin[200009];
ll f[1000009];
qu q[200009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,t;
  cin>>n>>t;
  ll i=1;
  while(i<=n)
  	cin>>a[i++];
  i=0;
  while(i<t)
  {
  	cin>>q[i].l>>q[i].r;
  	q[i].ind=i;
  	i++;
  }
  sort(q,q+t,cmp);
  ll ans=0,ml=0,mr=-1;
  i=0;
  while(i<t)
  {
  	while(ml>q[i].l)
  	{
  		ml--;
  		ans-=f[a[ml]]*f[a[ml]]*a[ml];
  		f[a[ml]]++;
  		ans+=f[a[ml]]*f[a[ml]]*a[ml];
  	}
  	while(ml<q[i].l)
  	{
  		ans-=f[a[ml]]*f[a[ml]]*a[ml];
  		f[a[ml]]--;
  		ans+=f[a[ml]]*f[a[ml]]*a[ml];
  		ml++;
  	}
  	while(mr<q[i].r)
  	{
  		mr++;
  		ans-=f[a[mr]]*f[a[mr]]*a[mr];
  		f[a[mr]]++;
  		ans+=f[a[mr]]*f[a[mr]]*a[mr];
  	}
  	while(mr>q[i].r)
  	{
  		ans-=f[a[mr]]*f[a[mr]]*a[mr];
  		f[a[mr]]--;
  		ans+=f[a[mr]]*f[a[mr]]*a[mr];
  		mr--;
  	}
  	fin[q[i].ind]=ans;
  	i++;
  }
  i=0;
  while(i<t)
  {
  	deb(fin[i]);
  	i++;
  }
}