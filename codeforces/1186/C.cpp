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
ll f[1000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string a,b;
  cin>>a>>b;
  a='!'+a;
  ll i=1;
  while(i<a.size())
  {
    f[i]=f[i-1];
    if(a[i]=='1')
      f[i]++;
    i++;
  }
  i=0;
  ll ct=0;
  while(i<b.size())
  {
    if(b[i]=='1')
      ct++;
    i++;
  }
  ll j=1,ans=0;
  i=j+b.size()-1;
  while(i<a.size())
  {
    if((f[i]-f[j-1])%2==ct%2)
      ans++;
    i++;
    j++;
  }
  deb(ans)
}