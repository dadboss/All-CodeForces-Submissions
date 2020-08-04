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
  string s[3];
  ll i=0;
  while(i<3)
    cin>>s[i++];
  ll c=0,z=0,e=0,q=0,w=0;
  i=0;
  ll j;
  while(i<3)
  {
    j=0;
    while(j<3)
    {
      if(s[i][j]=='0')
        z++;
      else if(s[i][j]=='X')
        c++;
      else
        e++;
      j++;
    }
    i++;
  }
  if(c!=z&&c!=z+1)
  {
    deb("illegal")
    return 0;
  }
  i=0;
  while(i<3)
  {
    j=0;
    while(j<3&&s[i][j]=='X')
      j++;
    if(j==3)
      w++;
    j=0;
    while(j<3&&s[i][j]=='0')
      j++;
    if(j==3)
      q++;
    j=0;
    while(j<3&&s[j][i]=='X')
      j++;
    if(j==3)
      w++;
    j=0;
    while(j<3&&s[j][i]=='0')
      j++;
    if(j==3)
      q++;
    i++;
  }
  i=0;
  while(i<3&&s[i][i]=='0')
    i++;
  if(i==3)
    q++;
  i=0;
  while(i<3&&s[i][i]=='X')
    i++;
  if(i==3)
    w++;
  i=0;
  while(i<3&&s[i][2-i]=='X')
    i++;
  if(i==3)
    w++;
  i=0;
  while(i<3&&s[i][2-i]=='0')
    i++;
  if(i==3)
    q++;
  if(q==w&&q==0)
  {
    if(z+c==9)
    {
      deb("draw")
      return 0;
    }
    if(z==c)
      deb("first")
    else
      deb("second")
    return 0;
  }
  if(w==0&&z==c)
  {
    deb("the second player won")
    return 0;
  }
  if(q==0&&z+1==c)
  {
    deb("the first player won ")
    return 0;
  }
  deb("illegal")
}