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
bool f(deque<char> &s)
{
  ll i=1,j;
    while(i<s.size())
    {
      if(abs(s[i]-s[i-1])==1)
      {
        j=i+1;
        while(j<s.size())
        {
          if(abs(s[j]-s[i-1])!=1)
          {
            swap(s[j],s[i]);
            break;
          }
          j++;
        }
        if(j==s.size())
        {
          return 0;
        }
      }
      i++;
    }
    return 1;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j;
  //string s,q;
  string S;
  cin>>t;
  char ch;
  while(t--)
  {
    deque<char> s,q;
    cin>>S;
    for(auto x:S)
      s.pb(x);
    i=0;
    while(i<s.size())
    {
      q=s;
      if(f(s))
      {
        while(!s.empty())
        {
          cout<<s.front();
          s.pop_front();
        }
        cout<<"\n";
        break;
      }
      ch=s[0];
      q.pop_front();
      q.pb(ch);
      i++;
      s=q;
    }
    if(i==q.size())
      deb("No answer")
  }
}