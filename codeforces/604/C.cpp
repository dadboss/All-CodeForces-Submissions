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
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll i=0;
  ll ans=0,len,ctr=0;
  char k;
  while(i<s.size())
  {
    k=s[i];
    len=0;
    while(i<s.size()&&s[i]==k)
    {
      i++;
      len++;
    }
    ans++;
    if(len>1)
      ctr=2;
    if(i==s.size())
      {
        
        break;
      }
  }
  deb(min(n,ans+ctr));
}