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
ll n,m;
string s[20];
bool f(ll i, string &tar,set<ll> S)
{
	if(i==m)
		return 1;
	char ch='a';
	ll j;
	while(ch<='z')
	{
		j=0;
		vector<ll> v;
		while(j<n)
		{
			if(s[j][i]!=ch)
			{
				if(S.find(j)!=S.end())
					break;
				v.pb(j);
			}
			j++;
		}
		if(j==n)
		{
			for(auto x:v)
				S.insert(x);
			tar+=ch;
			if(f(i+1,tar,S))
				return 1;
			tar.pop_back();
			for(auto x:v)
				S.erase(x);
		}
		ch++;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i;
  cin>>t;
  while(t--)
  {
  	cin>>n>>m;
  	i=0;
  	while(i<n)
  		cin>>s[i++];
  	string a;
  	set<ll> q;
  	if(f(0,a,q))
  		deb(a)
  	else
  		deb(-1);
  }
}