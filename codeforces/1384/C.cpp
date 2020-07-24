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
  ll t,i,n,j,ans,k;
  cin>>t;
  string s,b;
  while(t--)
  {
    cin>>n>>s>>b;
    ans=0;
    i=0;
    ll a[26][26]={};
    while(i<n)
    {
      if(s[i]!=b[i])
      {
        a[s[i]-'a'][b[i]-'a']++;
      }
      if(b[i]<s[i])
      {
        deb(-1)
        break;
      }
      i++;
    }
    if(i!=n)
      continue;
    i=0;
    while(i<25)
    {
      j=i+1;
      while(j<26)
      {
        if(a[i][j])
        {
          ans++;
          k=j+1;
          while(k<26)
          {
            a[j][k]+=a[i][k];
            k++;
          }
          break;
        }
        j++;
      }
      i++;
    }
   deb(ans)
  }
}