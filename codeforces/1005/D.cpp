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
  string s;
  cin>>s;
  ll i=0,ans=0,o=0,t=0;
  while(i<s.size())
  {
    if((s[i]-'0')%3==0)
    {
      ans++;
      o=t=0;
    }
    else if((s[i]-'0')%3==1)
    {
      if(o==2||t)
      {
        ans++;
        o=t=0;
      }
      else
        o++;
    }
    else
    {
      if(o||t==2)
      {
        ans++;
        o=t=0;
      }
      else
        t++;
    }
    i++;  
  }
  deb(ans)
}