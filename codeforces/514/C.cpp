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
#define p 31
#define mod 1116295198451 
ll pr[600010];
ll i,ans;
inline ll has(string &s)
{
  i=ans=0;
  while(i<s.size())
  {
    ans+=(s[i]-'a'+1)*pr[i];
    ans%=mod;
    i++;
  }
  return ans;
}
set<ll> S;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  pr[0]=1;
  i=1;
  while(i<=600009)
  {
    pr[i]=pr[i-1]*p;
    pr[i]%=mod;
    i++;
  }
  ll n,m,x,h;
  cin>>n>>m;
  string s;
  while(n--)
  {
    cin>>s;
    h=has(s);
    S.insert(h);
  }
  while(m--)
  {
    cin>>s;
    h=has(s);
    i=0;
    while(i<s.size())
    {
      if(s[i]=='a')
      {
        x=h+pr[i];
        x%=mod;
        if(S.find(x)!=S.end())
        {
          YES
          break;
        }
        x+=pr[i];
        x%=mod;
        if(S.find(x)!=S.end())
        {
          YES
          break;
        }
      }
      else if(s[i]=='b')
      {
        x=h+pr[i];
        x%=mod;
        if(S.find(x)!=S.end())
        {
          YES
          break;
        }
        x=h+mod-pr[i];
        x%=mod;
        if(S.find(x)!=S.end())
        {
          YES
          break;
        }
      }
      else
      {
        x=h+mod-pr[i];
        x%=mod;
        if(S.find(x)!=S.end())
        {
          YES
          break;
        }
        x+=mod-pr[i];
        x%=mod;if(S.find(x)!=S.end())
        {
          YES
          break;
        }
      }
      i++;
    }
    if(i==s.size())
      NO
  }
}