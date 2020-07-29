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
  ll t,i,ans,ct,j,k;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>s;
    //deb(s.size())
    ll a[11]={};
    k=0;
    ans=2;
    while(k<s.size())
    {
        a[s[k]-'0']++;
        ans=max(ans,a[s[k]-'0']);
        k++;
    }
    i=0;
    while(i<10)
    {
      j=i+1;
      while(j<10)
        {
          ct=0;
          k=0;
          while(k<s.size())
          {
            if((s[k]-'0')==i&&ct%2)
              ct++;
            if((s[k]-'0')==j&&ct%2==0)
              ct++;
            k++;
          }
          ans=max(ans,ct/2*2);
          ct=0;
          k=0;
          while(k<s.size())
          {
            if((s[k]-'0')==j&&ct%2)
              ct++;
            if((s[k]-'0')==i&&ct%2==0)
              ct++;
            k++;
          }
          ans=max(ans,ct/2*2);
          //Deb(i,j,ans);
          j++;
        }
        i++;
    }
    deb(s.size()-ans)
  }
}