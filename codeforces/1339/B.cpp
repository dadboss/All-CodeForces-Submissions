#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll a[100009],b[100009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j,k;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	i=0;
  	while(i<n)
  		cin>>a[i++];
  	sort(a,a+n);
  	i=0;
  	j=n-1;
  	k=n-1;
  	while(i<=j)
  	{
  		b[k]=a[i];
  		k--;
  		i++;
  		b[k]=a[j];
  		k--;
  		j--;
  	}
  	i=0;
  	while(i<n)
  		cout<<b[i++]<<" ";
  	cout<<"\n";
  }
}