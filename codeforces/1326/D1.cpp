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
string s;
inline bool f(ll i,ll j)
{
	while(i<=j)
	{
		if(s[i]!=s[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,k,st,e,o;
  cin>>t;
  string a,b,mx;
  while(t--)
  {
  	cin>>s;
  	i=0;
 	j=s.size()-1;
 	while(i<=j&&s[i]==s[j])
 	{
 		i++;
 		j--	;
 	}
 	if(i>j)
 	{
 		deb(s)
 		continue;
 	}
 	a=s.substr(i,j-i+1);
 	k=j-1;
 	st=-10;
 	e=-10;
 	while(k>=i)
 	{
 		if(f(i,k))
 			{
 				st=i;
 				e=k;
 				break;
 			}
 		k--;
 	}
 	k=i+1;
 	while(k<=j)
 	{
 		if(f(k,j)&&j-k>e-st)
 		{
 			e=j;
 			st=k;
 			break;
 		}
 		k++;
 	}
 	o=0;
 	while(o<i)
 	{
 		cout<<s[o];
 		o++;
 	}
 	if(st!=-10)
 	{
 		while(st<=e)
 		{
 			cout<<s[st];
 			st++;
 		}
 	}
 	o=j+1;
 	while(o<s.size())
 	{
 		cout<<s[o];
 		o++;
 	}
 	cout<<"\n";	
  }
}