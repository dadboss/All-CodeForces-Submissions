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
  ll n,q,u,l;
  cin>>n>>q;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=1;
  while(i<n)
  {
    a[i]+=a[i-1];
    i++;
  }
  ll sum=0;
  while(q--)
  {
    cin>>l;
    sum+=l;
    u=lower_bound(a,a+n,sum)-a;
    //Deb(l,u,sum);
    if(u>=n||sum>=a[n-1])
    {
      deb(n)
      sum=0;
    }
    else
    {
      if(a[u]>sum)
      {
        deb(n-u)
      }
      else
        deb(n-u-1)
    }
  }
}