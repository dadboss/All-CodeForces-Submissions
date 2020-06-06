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
  set<ll> s;
  ll d;
  ll sum=0;
  vector<ll> v;
  while(n--)
  {
    cin>>d;
    if(d%2)
    {
      v.pb(d);
    }
    else
    {
      if(d>1)
        sum+=d;
    }
  }
  //deb(sum)
  sort(all(v));
  if(v.back()<0)
  {
    sum+=v.back();
    deb(sum);
    return 0;
  }
  ll i=upper_bound(all(v),0)-v.begin();
  if((v.size()-i)%2==0)
    {
      if(i>0&&-v[i-1]<v[i])
        i--;
      else
        i++;
    }
  while(i<v.size())
  {
    sum+=v[i];
    i++;
  }
  deb(sum)
}