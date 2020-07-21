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
ll a[1009],b[1009],j,x,y;
inline void flip(ll i)
{
  ll j=1;
  while(j<i)
  {
    x=a[j];
    y=a[i];
    a[j]=1-y;
    a[i]=1-x;
    j++;
    i--;
  }
  if(j==i)
    a[j]=1-a[j];
  return;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n;
  cin>>t;
  string s,p;
  while(t--)
  {
    cin>>n>>s>>p;
    i=0;
    vector<ll> ans;
    while(i<n)
    {
      if(s[i]=='0')
        a[i+1]=0;
      else
        a[i+1]=1;
      if(p[i]=='0')
        b[i+1]=0;
      else
        b[i+1]=1;
      i++;
    }
    i=n;
    while(i)
    {
      if(a[i]!=b[i])
      {
        if(b[i]==a[1])
        {
          ans.pb(1);
          a[1]=1-a[1];
        }
        ans.pb(i);
        flip(i);
      }
      i--;
    }
    cout<<ans.size()<<" ";
    for(auto q:ans)
      cout<<q<<" ";
    cout<<"\n";
  }
}