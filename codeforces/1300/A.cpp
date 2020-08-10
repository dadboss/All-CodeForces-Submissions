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
ll a[109];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,ans,ct,sum,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=sum=ct=0;
    while(i<n)
      {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0)
          ct++;
        i++;
      }

  ans=0;
  ans+=ct;
  sum+=ct;
  if(sum==0)
    ans++;
  deb(ans)
  }
}
