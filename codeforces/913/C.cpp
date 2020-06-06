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
ll a[40];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,l;
  cin>>n>>l;
  ll i=1;
  while(i<=n)
  {
    cin>>a[i];
    if(i-1&&2*a[i-1]<a[i])
      a[i]=2*a[i-1];
    i++;
  }
  i=n-1;
  while(i)
  {
    a[i]=min(a[i],a[i+1]);
    i--;
  }
  i=n;
  ll num,sum=0,ans=LLONG_MAX;
  while(i)
  {
    num=1ll<<(i-1);
    //deb(num)
    sum+=l/num*a[i];
    ans=min(ans,sum+a[i]);
    l%=num;
    //deB(i,ans)
    i--;
  }
  ans=min(ans,sum);
  deb(ans);
}