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
ll ans[200009],a[26];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,mx,xm=0,j;
  cin>>n;
  string s;
  cin>>s;
  ll i=0;
  while(i<n)
  {
    mx=0;
    j=s[i]-'a';
    j++;
    while(j<26)
    {
      mx=max(mx,a[j]);
      j++;
    }
    ans[i]=mx+1;
    a[s[i]-'a']=max(mx+1,1ll);
    xm=max(xm,ans[i]);
    i++;
  }
  deb(xm);
  i=0;
  while(i<n)
  {
    cout<<ans[i]<<" ";
    i++;
  }
}