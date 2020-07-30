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
ll a[100009],s[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,k,z,q,sum,len,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>k>>z;
    i=0;
    while(i<n)
    {
      cin>>a[i];
      if(i)
        s[i]=s[i-1]+a[i];
      else
        s[0]=a[i];
      i++;
    }
    i=1;
    ans=0;
    while(i<n)
    {
      len=k;
      q=sum=0;
      while(q<=z&&len>=i-1)
      {
        ans=max(ans,sum+s[len]);
        sum+=a[i]+a[i-1];
        len-=2;
        q++;
      }
      i++;
    }
    deb(ans)
  }
}