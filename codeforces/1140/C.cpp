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
  ll n,k,l,b,len=0;
  cin>>n>>k;
  ll ans=LLONG_MIN;
  multiset<pair<ll,ll>> s;
  while(n--)
  {
    cin>>l>>b;
    s.insert({b,l});
  }
  multiset<ll> q;
  auto it=s.rbegin();
  while(it!=s.rend())
  {
    if(q.size()==k)
    {
      if((*it).ss>*q.begin())
      {
        len+=(*it).ss-*q.begin();
        q.erase(q.begin());
        q.insert((*it).ss);
      }
    }
    else
      {
        len+=(*it).ss;
        q.insert((*it).ss);
      }
    ans=max(ans,len*(*it).ff);
    //deb(ans)
    it++;
  }
  deb(ans)
}