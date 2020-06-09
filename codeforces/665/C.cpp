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
  s+='!';
  ll i=0;
  while(i<s.size()-1)
  {
    if(s[i]==s[i+1])
    {
      if(s[i+1]==s[i+2])
      {
        if(s[i]=='a')
          s[i+1]='b';
        else
          s[i+1]='a';
      }
      else
      {
        if(s[i+2]=='a') 
          {
            if(s[i]=='b')
              s[i+1]='c';
            else
              s[i+1]='b';
          }
          else if(s[i+2]=='b')
          {
            if(s[i]!='a')
              s[i+1]='a';
            else
              s[i+1]='c';
          }
          else
          {
            if(s[i]=='a')
              s[i+1]='b';
            else
              s[i+1]='a';
          }
      }
    }
    i++;
  }
  s.pop_back();
  deb(s)
}