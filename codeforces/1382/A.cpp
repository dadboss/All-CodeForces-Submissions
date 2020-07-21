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
ll a[1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,m,i,d;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    unordered_map<ll,bool> ma;
    while(n--)
    {
      cin>>d;
      ma[d]=1;
    }
    i=0;
    while(i<m)
      cin>>a[i++];
    i=0;
    while(i<m)
    {
      if(ma[a[i]])
      {
        YES
        deB(1,a[i]);
        break;
      }
      i++;
    }
    if(i==m)
      NO
  }
}