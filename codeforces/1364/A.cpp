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
ll a[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,x,fi,i,sum,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>x;
    i=1;
    while(i<=n)
      cin>>a[i++];
    i=1;
    sum=0;
    ans=-1;
    fi=-1;
    while(i<=n)
    {
      sum+=a[i];
      sum%=x;
      if(sum)
      {
        ans=max(ans,i);
        if(fi==-1)
          fi=i;
      }
      else if(fi!=-1)
        ans=max(ans,i-fi);
      //deB(ans,fi)
      i++;
    }
    deb(ans)

  }
}