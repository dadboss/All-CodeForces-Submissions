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
  ll n;
  string s;
  cin>>n>>s;
  ll i=0;
  while(i<n)
    cin>>a[i++];
  ll q=0,b=0,c=0,d=0;
  i=0;
  while(i<n)
  {
    if(s[i]=='h')
    {
      q+=a[i];
    }
    else if(s[i]=='a')
    {
      b=min(q,b+a[i]);
    }
    else if(s[i]=='r')
    {
      c=min(b,c+a[i]);
    }
    else if(s[i]=='d')
      d=min(c,d+a[i]);
    i++;
  }
  deb(d)
}