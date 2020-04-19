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
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,b,f,n;
  string s,q;
  cin>>t;
  while(t--)
  {
    cin>>n>>s>>q;
    i=b=0;
    f=1;
    while(i<n-1)
    {
      if(f)
      {
        if(s[i]<'3')
          {
            i++;
          }
        else
        {
          if(q[i]<'3')
          {
            NO
            b=1;
            break;
          }
          i++;
          f=0;
        }
      }
      else
      {
        if(q[i]<'3')
          i++;
        else
        {
          if(s[i]<'3')
          {

            NO
            b=1;
            break;
          }
          f=1;
          i++;
        }
      }
    }
    if(b==0)
    {

      if(f&&s[i]>'2'&&q[i]>'2')
        YES
      else if(f==0&&q[i]<'3')
        YES
      else
       {
          NO
       }
    }
  }
}
