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
  ll t,i;
  string s;
  cin>>t;
  vector<ll> v;
  while(t--)
  {
    cin>>s;
    s='!'+s+'!'+'!'+'!';
    i=1;
    while(i<s.size()-3)
    {
      if(s[i]=='o'&&i>=3&&s[i-1]=='w'&&s[i-2]=='t'&&s[i+1]=='n'&&s[i+2]=='e')
        {
          v.pb(i);
          i+=3;
        }
      else if(s[i]=='n'&&s[i-1]=='o'&&s[i+1]=='e')
        {
          v.pb(i);
          i+=2;
        }
      else if(s[i]=='w'&&s[i-1]=='t'&&s[i+1]=='o'&&(s[i+2]!='n'||s[i+3]!='e'))
        {
          v.pb(i);
          i+=2;
        }
      else
        i++;
    }
    deb(v.size());
    if(!v.empty())
      for(ll x:v)
        cout<<x<<" ";
    cout<<"\n";
    v.clear();
  }
}