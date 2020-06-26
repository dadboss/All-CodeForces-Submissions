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
  ll t,i,ans,sum,c;
  cin>>t;
  string s;
  while(t--)
  {
    vector<pair<ll,ll>> v;
    ans=0;
    cin>>s;
    s='!'+s;
    i=1;
    c=0;
    while(i<s.size())
    {
      if(s[i]=='+')
        c++;
      else
        c--;
      if(c<0)
        v.pb({c,i});
      i++;
    }
    sum=0;
    for(auto x:v)
    {
      //deB(x.ff,x.ss)
      if(x.ff+sum<0)
      {
        ans+=x.ss*(-sum-x.ff);
        sum+=-sum-x.ff;
        //sum++;
        //deB(ans,sum)
      }
    }
    deb(ans+s.size()-1)
  }
}