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
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,l,r,f,i,k,j;
  cin>>t;
  while(t--)
  {
  	cin>>n>>l>>r;
  	r++;
  	if(l==n*(n-1)+1)
        {
            deb(1);
            continue;
        }
  	i=1;
  	k=1;
  	while(i+2*(n-k)<=l)
  	{
  		i+=2*(n-k);
  		k++;
  	}
  	if(l%2==0)
    {
        cout<<k+(l-i+1)/2<<" ";
        l++;
    }
    if(l!=r){
    f=0;
    while(k<n)
    {
        if(f==0)
            j=k+1+(l-i)/2;
        else
            j=k+1;
        f=1;
        while(j<=n)
        {
            cout<<k<<" ";
            l++;
            if(l==r)
                break;
            cout<<j<<" ";
            l++;
            if(l==r)
                break;
            j++;
        }
        if(j!=n+1)
            break;
        k++;
    }}
    if(l!=r)
        deb(1)
    else
    cout<<"\n";
  }
}
