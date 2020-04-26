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
  ll t,i,ct;
  cin>>t;
  string s;
  while(t--)
  {
  	cin>>s;
  	i=0;
  	ct=0;
  	while(i<s.size())
  	{
  		if(s[i]=='1')
  			ct++;
  		i++;
  	}
  	if(ct==0||ct==s.size())
  		deb(s)
  	else
  	{
  		i=0;
  		while(i<s.size())
  		{
  			cout<<"10";
  			i++;
  		}
  		cout<<"\n";
  	}
  }
}
