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
ll a[1500];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,k,num;
  cin>>t;
  while(t--)
  {
    cin>>n;
    i=0;
    vector<ll> f(3000,0);
    while(i<n)
    {
      cin>>a[i];
      f[a[i]]++;
      i++;
    }
    k=1;
    while(k<=1025)
    {
      i=0;
      vector<ll> F=f;
      while(i<n)
      {
        num=k^a[i];
        if(F[num]==0)
          break;
        F[num]--;
        i++;
      }
      i=0;
      while(i<=1025)
      {
        if(F[i])
          break;
        i++;
      }
      if(i==1026)
      {
        deb(k);
        break;
      }
      k++;
    }
    if(k==1026)
      deb(-1);
  }
}