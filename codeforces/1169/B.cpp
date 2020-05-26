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
  cin>>m>>n;
  ll i=0;
  pair<ll,ll> p[n];
  while(i<n)
  {
  	cin>>p[i].ff>>p[i].ss;
  	i++;
  }
  ll x=p[0].ff;
  i=1;
  multiset<ll> s;
  set<ll> S;
  ll k=0;
  while(i<n)
  {
  	if(p[i].ff!=x&&p[i].ss!=x)
  	{
  		k++;
  		S.insert(p[i].ff);
  		S.insert(p[i].ss);
  		s.insert(p[i].ff);
  		s.insert(p[i].ss);
  	}
  	i++;
  }
  if(k==0)
  {
  	YES
  	return 0;
  }
  for(auto x:S)
  {
  	if(s.count(x)>=k)
  	{
  		YES
  		return 0;
  	}
  }
  x=p[0].ss;
  s.clear();
  S.clear();
  k=0;
  i=1;
  while(i<n)
  {
  	if(p[i].ff!=x&&p[i].ss!=x)
  	{
  		k++;
  		S.insert(p[i].ff);
  		S.insert(p[i].ss);
  		s.insert(p[i].ff);
  		s.insert(p[i].ss);
  	}
  	i++;
  }
  if(k==0)
  {
  	YES
  	return 0;
  }
  for(auto x:S)
  {
  	//deB(x,S.count(x));
  	if(s.count(x)>=k)
  	{
  		YES
  		return 0;
  	}
  }
  NO
}