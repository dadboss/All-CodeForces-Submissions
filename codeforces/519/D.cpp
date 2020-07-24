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
ll s[26];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll i=0;
  while(i<26)
    cin>>s[i++];
  string a;
  cin>>a;
  ll ans=0;
  map<pair<char,ll>,ll> m;
  i=0;
  ll sum=0;
  while(i<a.size())
  {
    auto it=m.find({a[i],sum});
    if(it!=m.end())
      ans+=m[{a[i],sum}];
    sum+=s[a[i]-'a'];
    m[{a[i],sum}]++;
    i++;
  }
  deb(ans)
}