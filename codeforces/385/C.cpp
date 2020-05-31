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
ll a[10000009],f[10000009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll i=2,j;
  while(i<=10000000)
  {
    if(a[i]==0)
    {
      j=i;
      while(j<=10000000)
      {
        a[j]=i;
        j+=i;
      }
    }
    i++;
  }
  ll n,x,k;
  cin>>n;
  while(n--)
  {
    cin>>x;
    while(x>1)
    {
      k=a[x];
      f[k]++;
      while(x%k==0)
        x/=k;
    }
  }
  i=3;
  while(i<=10000000)
  {
    f[i]+=f[i-1];
    i++;
  }
  ll q,l,r;
  cin>>q;
  while(q--)
  {
    cin>>l>>r;
    r=min(r,10000000ll);
    l=min(l,10000000ll);
    deb(f[r]-f[l-1]);
  }
}