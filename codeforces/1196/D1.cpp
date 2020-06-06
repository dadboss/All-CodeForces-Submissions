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
ll cr[200009],cg[200009],cb[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,k,i,ans,e;
  cin>>t;
  string s,r;
  while(t--)
  {
    ans=LLONG_MAX;
    cin>>n>>k>>s;
    s='!'+s;
    i=1;
    r="RGB";
    while(i<s.size())
    {
      cr[i]=cr[i-1];
      if(s[i]!=r[i%3])
        cr[i]++;
      i++;
    }
    i=1;
    r="GBR";
    while(i<s.size())
    {
      cg[i]=cg[i-1];
      if(s[i]!=r[i%3])
        cg[i]++;
      i++;
    }
    i=1;
    r="BRG";
    while(i<s.size())
    {
      cb[i]=cb[i-1];
      if(s[i]!=r[i%3])
        cb[i]++;
      i++;
    }
    e=k;
    i=1;
    while(e<s.size())
    {
      ans=min({ans,cr[e]-cr[i-1],cg[e]-cg[i-1],cb[e]-cb[i-1]});
      e++;
      i++;
    }
    deb(ans)
  }
}