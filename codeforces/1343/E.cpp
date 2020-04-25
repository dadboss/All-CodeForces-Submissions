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
ll d[3][200009],p[200009];
vector<ll> a[200009];
void bfs(ll b,ll s)
{
	ll u;
	d[b][s]=0;
	queue<ll> q;
	q.push(s);
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for(auto i:a[u])
		{
			if(d[b][i]==-1)
			{
				d[b][i]=1+d[b][u];
				q.push(i);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,ans,i,n,m,l,r,A,b,c,j;
  cin>>t;
  while(t--)
  {
  	cin>>n>>m>>A>>b>>c;
  	i=1;
  	while(i<=n)
  	{
  		a[i].clear();
  		i++;
  	}
  	i=0;
  	while(i<3)
  	{
  		j=0;
  		while(j<=n)
  		{
  			d[i][j]=-1;
  			j++;
  		}
  		i++;
  	}
  	i=1;
  	while(i<=m)
  		cin>>p[i++];
  	sort(p+1,p+m+1);
  	i=2;
  	while(i<=m)
  	{
  		p[i]+=p[i-1];
  		i++;
  	}
  	i=0;
  	while(i<m)
  	{
  		cin>>l>>r;
  		a[l].pb(r);
  		a[r].pb(l);
  		i++;
  	}
  	bfs(0,A);
  	bfs(1,b);
  	bfs(2,c);
  	ans=LLONG_MAX;
  	i=1;
  	while(i<=n)
  	{
  		//deB(i,d[0][i]+d[1][i]+d[2][i]);
  		if(d[0][i]+d[1][i]+d[2][i]<=m)
  		{
  			//deB(i,d[0][i]+d[1][i]+d[2][i]);
  			ans=min(ans,p[d[0][i]+d[1][i]+d[2][i]]+p[d[1][i]]);
  		}
  		i++;
  	}
  	deb(ans);
  }
}