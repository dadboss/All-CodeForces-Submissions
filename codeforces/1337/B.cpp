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
  ll t,h,n,m,f;
  cin>>t;
  while(t--)
  {
    cin>>h>>n>>m;
    f=0;
    while(n)
    {
        if(h/2+10<h)
        {
            n--;
            h=h/2+10;
        }
        else
            break;
        if(h<1)
        {
            f=1;
            YES;
            break;
        }
    }
    if(f==0)
    {
        while(m)
        {
            m--;
            h-=10;
        if(h<1)
        {
            f=1;
            YES;
            break;
        }
        }
        if(f==0)
            NO
    }
  }
}
