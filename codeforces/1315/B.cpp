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
  ll t,i,p,a,b,st;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>p>>s;
    s='!'+s;
    i=s.size()-2;
    st=s.size()-2;
    while(i)
    {
      if(s[i]=='A')
      {
        if(p<a)
          break;
        p-=a;
        while(i&&s[i]=='A')
          i--;
        st=i;
      }
      else
      {
        if(p<b)
          break;
        p-=b;
        while(i&&s[i]=='B')
          i--;
        st=i;
      }
    }
    deb(st+1)
  }
}