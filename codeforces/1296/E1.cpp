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
ll ans[209];
char ch;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  ll n;
  cin>>n>>s;
  string p=s;
  sort(all(p));
  ll i=0,j;
  while(i<n)
  {
  //    deb(i)
    if(s[i]!=p[i])
    {
      j=i;
      string q;
      while(s[j]!=p[i])
      {
          q+=s[j];
          j++;
      }
      string h=q;
      sort(all(h));
      if(h!=q)
      {
        NO
        return 0;
      }
      ans[j]=1;
      while(j>i)
      {
          swap(s[j],s[j-1]);
          j--;
      }
    }
    i++;
  }
  YES
  i=0;
  while(i<n)
  {
      cout<<ans[i];
      i++;
  }
}
