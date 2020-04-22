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
  ll a,b,c,d,n,m,i,j,q,l,r,D,C;
  cin>>n>>m;
  char s[n+5][m+5];
  ll h[n+5][m+5]={},v[n+5][m+5]={};
  i=1;
  while(i<=n)
  {
  	j=1;
  	while(j<=m)
  	{
  		cin>>s[i][j];
  		j++;
  	}
  	i++;
  }
  i=1;
  while(i<=n)
  {
  	j=1;
  	while(j<=m)
  	{
  		h[i][j]=h[i-1][j]+h[i][j-1]-h[i-1][j-1];
  		v[i][j]=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
  		if(s[i][j]=='.')
  		{
  			if(s[i][j+1]=='.')
  				h[i][j]++;
  			if(s[i+1][j]=='.')
  				v[i][j]++;
  		}
  		j++;
  	}
  	i++;
  }
  cin>>q;
  while(q--)
  {
  	cin>>a>>b>>c>>d;
  	C=c-1;
  	D=d-1;
  	if(c<a||d<b)
  		deb(0)
  	else
  	deb(h[c][D]+h[a-1][b-1]-h[a-1][D]-h[c][b-1]  +  v[C][d]+v[a-1][b-1]-v[a-1][d]-v[C][b-1])
  }
}