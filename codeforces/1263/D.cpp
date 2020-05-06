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
ll v[200009];
vector<ll> a[200009];
void dfs(ll i)
{
	if(v[i])
		return;
	v[i]++;
	for(auto x:a[i])
		dfs(x);
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  string S;
  cin>>n;
  set<char> s[n+9];
  ll i=1;
  while(i<=n)
  {
  	cin>>S;
  	for(auto x:S)
  		s[i].insert(x);
  	i++;
  }
  char ch='a';
  ll ct;
  while(ch<='z')
  {
  	ct=-1;
  	i=1;
  	while(i<=n)
  	{
  		if(s[i].find(ch)!=s[i].end())
  		{
  			if(ct==-1)
  				ct=i;
  			else
  				{
  					a[ct].pb(i);
  					a[i].pb(ct);
  				}
  		}
  		i++;
  	}
  	ch++;
  }
  i=1;
  ct=0;
  while(i<=n)
  {
  	if(v[i]==0)
  	{
  		ct++;
  		dfs(i);
  	}
  	i++;
  }
  deb(ct);
}