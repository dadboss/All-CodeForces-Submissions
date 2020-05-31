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
ll a1[1009],a2[1009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,ans,j,n;
  cin>>t;
  string s;
  while(t--)
  {
    ans=LLONG_MAX;
    cin>>s;
    s='!'+s;
    n=s.size();
    s+='!';
    a1[1]=0;
    a2[1]=0;
    if(s[1]=='1')
      a1[1]++;
    else
      a2[1]++;
    i=2;
    while(i<n)
    {
      a1[i]=a1[i-1];
      a2[i]=a2[i-1];
      if(s[i]=='1')
        a1[i]++;
      else
        a2[i]++;
      i++;
    }
    i=1;
    while(i<n)
    {
      j=i;
      while(j<n)
      {
        ans=min(ans,a1[j]+a2[n-1]-a2[j]);
       // Deb(ans,i,j);
        ans=min(ans,a2[j]+a1[n-1]-a1[j]);
        //Deb(ans,i,j);
        ans=min(ans,a2[i-1]+a1[n-1]-a1[i-1]);
        ans=min(ans,a1[i-1]+a2[n-1]-a2[i-1]);
        j++;
      }
      i++;
    }
    ans=min(ans,a1[n-1]);
    ans=min(ans,a2[n-1]);
    deb(ans);
  }
}