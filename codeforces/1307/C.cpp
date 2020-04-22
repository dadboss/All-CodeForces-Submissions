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
ll f[26];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  map<pair<ll,ll>,ll> m;
  string s;
  cin>>s;
  s='!'+s;
  ll i=1;
  ll mx=0,j;
  while(i<s.size())
  {
    j=0;
    while(j<26)
    {
      m[{j,s[i]-'a'}]+=f[j];
      mx=max(m[{j,s[i]-'a'}],mx);
      j++;
    }
    f[s[i]-'a']++;
    mx=max(mx,f[s[i]-'a']);
    i++;
  }
  deb(mx);
}
