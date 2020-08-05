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
ll a[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,ans,n,i;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>n>>s;
    i=0;
    stack<ll> f0,f1;
    ans=0;
    while(i<n)
    {
      if(s[i]=='1')
      {
        if(f0.empty())
        {
          ans++;
          a[i]=ans;
          f1.push(i);
        }
        else
        {
          a[i]=a[f0.top()];
          f1.push(i);
          f0.pop();
        }
      }
      else
      {
        if(f1.empty())
        {
          ans++;
          a[i]=ans;
          f0.push(i);
        }
        else
        {
          a[i]=a[f1.top()];
          f0.push(i);
          f1.pop();
        }
      }
      i++;
    }
    deb(ans)
    i=0;
    while(i<n)
    {
      cout<<a[i]<<" ";
      i++;
    }
    cout<<"\n";
  }
}