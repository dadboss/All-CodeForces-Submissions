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
ll a[100009],p[100009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j,st,k,end,ctr;
  cin>>t;
  while(t--)
  {
  	ctr=0;
  	cin>>n;
  	i=1;
  	while(i<=n)
  	{
  		cin>>a[i];
  		p[a[i]]=i;
  		i++;
  	}
  	st=p[1];
  	k=1;
  	end=n;
  	i=1;
  	while(k<=n)
  	{
  		i=st+1;
  		k++;
  		while(i<=end)
  		{
  			if(a[i]-1!=a[i-1])
  			{
  				ctr=1;
  				break;
  			}
  			i++;
  			k++;
  		}
  		if(ctr)
  			break;
  		end=st-1;
  		st=p[k];
  	}
  	if(ctr)
  		No
  	else
  		Yes
  }
}
