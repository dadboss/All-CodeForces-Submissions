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
ll a[59];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,ans,k,l;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<ll> f(109,0);
    i=0;
    while(i<n)
    {
      cin>>a[i];
      f[a[i]]++;
      i++;
    }
    k=2;
    ans=0;
    while(k<=100)
    {
      i=0;
      vector<ll> p=f;
      l=0;
      while(i<n)
      {
        if(a[i]<k&&p[a[i]])
        {
          if(k-a[i]==a[i]&&p[a[i]]>1)
          {
            l++;
            p[a[i]]-=2;
          }
          if(k-a[i]!=a[i]&&p[k-a[i]])
          {
            l++;
            p[a[i]]--;
            p[k-a[i]]--;
          }
        }
        i++;
      }
      ans=max(ans,l);
      k++;
    }
    deb(ans)
  }
}