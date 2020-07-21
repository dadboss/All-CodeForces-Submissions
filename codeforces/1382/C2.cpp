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
ll a[100009],b[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,lt,rt,x,st,f;
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
    lt=1;
    i=n;
    f=0;
    rt=n;
    while(i)
    {
      if(f)
        x=1-a[lt];
      else
        x=a[rt];
      if(b[i]==x)
      {
        if(f)
          lt++;
        else
          rt--;
      }
      else
      {
        if(f)
          st=1-a[rt];
        else
          st=a[lt];
        if(b[i]==st)
        {
          ans.pb(1);
          st=1-st;
        }
        ans.pb(i);
        f=1-f;
        if(f)
          lt++;
        else
          rt--;
      }
      i--;
    }
    cout<<ans.size()<<" ";
    for(auto q:ans)
      cout<<q<<" ";
    cout<<"\n";
  }
}