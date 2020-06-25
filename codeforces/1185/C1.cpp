#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<" ";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
ll f[111];
ll a[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  i=0;
  ll ct,sum,d,j,t=0;
  while(i<n)
  {
    if(t+a[i]<=m)
      deb(0)
    else
    {
      d=t+a[i]-m;
      ct=0;
      j=100;
      while(1)
      {
        if(f[j])
        {
          if(j*f[j]<d)
          {
            d-=j*f[j];
            ct+=f[j];
          }
          else
          {
            ct+=d/j;
            if(d%j)
              ct++;
            break;
          }
        }
        j--;
      }
      deb(ct)
    }
    f[a[i]]++;
    t+=a[i];
    i++;
  } 
}