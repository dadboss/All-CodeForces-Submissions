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
  ll n,cmaxa,cmaxb,dif1,dif2,a,b,c,d,x;
  cin>>a>>b>>c>>d;
  x=b;
  ll A=a;
  ll ans=0;
  while(x<=c)
  {
  	a=min(max(A,c-x+1),b);
  //	deb(a);
  	cmaxa=min(d,a+x-1);
  	dif1=max(0ll,cmaxa-c+1);
  	cmaxb=min(d,b+x-1);
  	dif2=max(0ll,cmaxb-c+1);
  	n=dif2-dif1+1;
  	ans+=(n)*(dif1+dif2)/2;
  	n=b-a+1-n;
  	ans+=n*dif2;
  	//deB(dif1,dif2)
  	//deb(ans)
  	x++;
  }
  deb(ans);
}