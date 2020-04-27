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
  ll n,ans=1;
  cin>>n;
  ll i=0,a[n];
  while(i<n)
  	cin>>a[i++];
  multiset<ll> s;
  queue<ll> q;
  i=0;
  while(i<n)
  {
  	s.insert(a[i]);
  	q.push(a[i]);
  	while(*s.rbegin()-*s.begin()>1)
  	{
  		s.erase(s.find(q.front()));
  		q.pop();
  	}
  	if(s.size()>ans)
  		ans=s.size();
  	i++;
  }
  deb(ans);
}