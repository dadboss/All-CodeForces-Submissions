#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<" ";
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
  set<pair<ll,ll>> s,S;
  ll n;
  cin>>n;
  ll i=1,d;
  while(n--)
  {
    cin>>d;
    s.insert({d,i});
    i++;
  }
  string q;
  cin>>q;
  for(auto x:q)
  {
    if(x=='0')
    {
      deb((*s.begin()).ss);
      S.insert({(*s.begin()).ff,(*s.begin()).ss});
      s.erase(s.begin());
    }
    else
    {
      deb((*S.rbegin()).ss);
      S.erase(*S.rbegin());
    }
  }
}
