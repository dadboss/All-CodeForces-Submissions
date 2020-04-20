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
// freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll k,j;
  string s;
  cin>>k>>s;
  s+='!';
  s='!'+s;
  vector<ll> v;
  ll i=1;
  ll a[s.size()+1]={},b[s.size()+1]={};
  while(i<s.size()-1)
  {
    if(s[i]=='1')
    {
      v.pb(i);
    }
    else
    {
      if(s[i-1]=='0')
        a[i]=1+a[i-1];
      else
        a[i]=1;
    }
    i++;
  }
  i=s.size()-2;
  while(i)
  {
    if(s[i]=='0')
    {
      if(s[i+1]=='0')
        b[i]=1+b[i+1];
      else
        b[i]=1;
    }
    i--;
  }
  ll ans=0;
  if(k&&(v.empty()||v.size()<k))
    deb(ans)
  else
  {
    if(k==0)
    {
      i=0;
      ll p=1;
      v.pb(s.size()-1);
      while(i<v.size())
      {
        ans+=(v[i]-p)*(v[i]-p+1)/2;
        p=v[i]+1;
        i++;
      }
      deb(ans);
      return 0;
    }
    j=0;
    i=k-1;
    while(i<v.size())
    {
      ans+=(a[v[j]-1]+1)*(1+b[v[i]+1]);
      i++;
      j++;
    }
    deb(ans);
  }
}