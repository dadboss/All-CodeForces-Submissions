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
  ll t,n,k,ans,i,l,d;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>n>>k>>s;
    s='!'+s;
    l=ans=0;
    i=1;
    while(i<s.size())
    {
      if(s[i]=='1')
      {
        if(l==0)
        {
          d=i-1;
          ans+=d/(k+1);
          l=i;
        }
        else{
        d=i-l-1;
        if(d>=2*k+1)
        {
          ans++;
          d-=(2*k+1);
          ans+=d/(k+1);
        }
        l=i;
      }
      }
      i++;
    }
    if(l==0)
    {
      ans=n/(k+1);
      if(n%(k+1))
        ans++;
    }
    else{
    d=n-l;
    ans+=d/(k+1);
  }
    deb(ans)
  }
}