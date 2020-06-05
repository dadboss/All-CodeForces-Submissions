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
  ll n,m;
  map<pair<ll,ll>,ll> l;
  cin>>n>>m;
  set<ll> s[n];
  ll i=0;
  ll j,d,ct=-1;
  while(i<n)
  {
    j=0;
    while(j<m)
    {
      cin>>d;
      l[{d,i}]=j;
      s[i].insert(d);
      j++;
    }
    if(s[i].size()>1)
      {
        ct=i;
      }
    i++;
  }
  j=i=0;
  while(i<n)
  {
    j^=*s[i].begin();
    i++;
  }
  if(j)
  {
    deb("TAK")
    i=0;
    while(i<n)
    {
      cout<<l[{*s[i].begin(),i}]+1<<" ";
      i++;
    }
    return 0;
  }
  if(ct==-1)
  {
    deb("NIE");
    return 0;
  }
  deb("TAK")
  i=0;
  while(i<ct)
  {
    cout<<l[{*s[i].begin(),i}]+1<<" ";
    i++;
  }
  cout<<l[{*s[ct].rbegin(),ct}]+1<<" ";
  i++;
  while(i<n)
  {
    cout<<l[{*s[i].begin(),i}]+1<<" ";
    i++;
  }
}