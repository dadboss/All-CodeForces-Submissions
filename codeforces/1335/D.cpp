#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n"
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
string s[10];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i;
  cin>>t;
  while(t--)
  {
  	i=1;
  	while(i<10)
  	{
  		cin>>s[i];
  		i++;
  	}
  	s[1][0]=s[1][1];
  	s[2][3]=s[2][4];
  	s[3][6]=s[3][7];

  	s[4][1]=s[4][2];
  	s[5][4]=s[5][5];
  	s[6][7]=s[6][8];

  	s[7][2]=s[7][3];
  	s[8][5]=s[8][6];
  	s[9][8]=s[9][0];
  	i=1;
  	while(i<10)
  	{
  		deb(s[i]);
  		i++;
  	}
  }
}