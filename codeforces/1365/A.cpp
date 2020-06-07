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
ll a[60][60];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,ct,n,m,j;
  cin>>t;
  while(t--)
  {
    set<ll> r,c;
    ct=0;
    cin>>n>>m;
    i=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        cin>>a[i][j];
        if(a[i][j])
        {
          r.insert(i);
          c.insert(j);
        }
        j++;
      }
      i++;
    }
    i=0;
    while(i<n)
    {
      j=0;
      while(j<m)
      {
        if(r.find(i)==r.end()&&c.find(j)==c.end())
        {
          r.insert(i);
          c.insert(j);
          ct++;
        }
        j++;
      }
      i++;
    }
    if(ct%2)
      deb("Ashish")
    else
      deb("Vivek")
  }
}