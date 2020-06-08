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
ll a[600],b[600];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j;
  cin>>t;
  while(t--)
  {
    multiset<pair<ll,ll>>s;
    cin>>n;
    i=1;
    while(i<=n)
    {
      cin>>a[i];
      i++;
    }
    i=1;
    while(i<=n)
      cin>>b[i++];
    if(n%2&&a[(n+1)/2]!=b[(n+1)/2])
    {
      NO
      continue;
    }
    i=1;
    j=n;
    while(i<j)
    {
      s.insert({a[i],a[j]});
      i++;
      j--;
    }
    i=1;
    j=n;
    while(i<j)
    {
      if(s.find({b[i],b[j]})!=s.end())
      {
        s.erase(s.find({b[i],b[j]}));
      }
      else if(s.find({b[j],b[i]})==s.end())
      {
        NO
        break;
      }
      else
      {
        s.erase(s.find({b[j],b[i]}));
      }
      i++;
      j--;
    }
    if(i>=j)
      YES
  }
}