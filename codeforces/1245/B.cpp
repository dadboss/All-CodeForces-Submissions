#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n,r,p,c,i,ans;
    cin>>t;
    while(t--)
    {
      ans=0;
      cin>>n>>r>>p>>c;
      string s;
      cin>>s;
      i=0;
      while(i<s.size())
      {
        if(s[i]=='R')
        {
          if(p)
          {
            s[i]='P';
            p--;
            ans++;
          }
          else
            s[i]='q';
        }
        else if(s[i]=='P')
        {
          if(c)
          {
            s[i]='S';
            c--;
            ans++;
          }
          else
            s[i]='q';
        }
        else
        {
          if(r)
          {
            s[i]='R';
            r--;
            ans++;
          }
          else
            s[i]='q';
        }
        i++;
      }
      if(ans<ceil(n/2.0))
      {
        cout<<"NO\n";
      }
      else
      {
        cout<<"YES\n";
        i=0;
        while(i<s.size())
        {
          if(s[i]=='q')
          {
            if(r)
            {
              cout<<'R';
              r--;
            }
            else if(p)
            {
              cout<<'P';
              p--;
            }
            else
            {
              c--;
              cout<<'S';
            }
          }
          else
            cout<<s[i];
        i++;
        }
        cout<<"\n";
      }
    }
}