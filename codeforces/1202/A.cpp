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
  ll t,i,ans;
  cin>>t;
  string a,b;
  while(t--)
  {
  	cin>>a>>b;
  	i=b.size()-1;
  	while(b[i]=='0')
  		i--;
  	i+=a.size()-b.size();
  	ans=0;
  	while(a[i]=='0')
  	{
  		i--;
  		ans++;
  	}
  	deb(ans)
  }
}