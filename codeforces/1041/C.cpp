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
ll a[200009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,d,i=0,u,f,x;
  cin>>n>>m>>d;
  set<ll> s;
  unordered_map<ll,ll> z;
  while(i<n)
  {
  	cin>>a[i];
  	s.insert(a[i]);
  	i++;
  }
  ll ans=0;
  while(!s.empty())
  {
  	ans++;
  	u=*s.begin();
  	s.erase(s.begin());
  	z[u]=ans;
  	while(1)
  	{
  		x=u+d;
  		//)
  		if(x>m||s.upper_bound(x)==s.end())
  			break;
  		u=*s.upper_bound(x);
  		z[u]=ans;
  		s.erase(u);
  	}
  }
  deb(ans)
  i=0;
  while(i<n)
  {
  	cout<<z[a[i]]<<" ";
  	i++;
  }
}