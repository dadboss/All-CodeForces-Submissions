#include<bits/stdc++.h>
using namespace std;
#define ll int
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
  set<string> m;
  ll i=0;
  string w[3];
  string s[n];
  while(i<n)
  {
  	cin>>s[i];
  	m.insert(s[i]);
  	i++;
  }
  ll ans=0,j,z;
  i=0;
  ll l,x;
  string q;
  while(i<n)
  {
  	m.erase(s[i]);
  	j=i+1;
  	while(j<n)
  	{
  			l=0;
  			q.clear();
  			while(l<k)
  			{
  				if(s[i][l]==s[j][l])
  					q+=s[i][l];
  				else if((s[i][l]=='S'&&s[j][l]=='T')||(s[i][l]=='T'&&s[j][l]=='S'))
  					q+='E';
  				else if((s[i][l]=='S'&&s[j][l]=='E')||(s[i][l]=='E'&&s[j][l]=='S'))
  					q+='T';
  				else if((s[i][l]=='T'&&s[j][l]=='E')||(s[i][l]=='E'&&s[j][l]=='T'))
  					q+='S';
  				l++;
  			}
  			if(l==k)
  			{
  				if(m.find(q)!=m.end())
  				{
  					ans++;
  				}
  			}
  		j++;
  	}
  	i++;
  }
  deb(ans/2);
}