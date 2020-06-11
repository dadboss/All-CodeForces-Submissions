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
  ll t,a,b,x,ans;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    if(a==b)
    {
      x=a/3;
      ans=2*x;
      a%=3;
      b%=3;
      if(a==2)
        ans++;
      deb(ans)
      continue;
    }
    else if(b>a)
    {
      swap(a,b);
    }
    x=min(a-b,b);
    ans=x;
    a=b=b-x;
    x=a/3;
    ans+=2*x;
    if(a%3==2)
      ans++;
    deb(ans)
  }
}