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
string s[4];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  if(n>3)
  {
    deb(-1)
    return 0;
  }
  if(n==1)
  {
    deb(0)
    return 0;
  }
  ll i=0,x;
  while(i<n)
    cin>>s[i++];
  if(n==2)
  {
    i=0;
    ll op1=0,op2=0;
    while(i<m)
    {
      x=(bool)(s[0][i]=='0')+(bool)(s[1][i]=='0');
      if(i%2)
      {
        if(x%2)
          op1++;
        else
          op2++;
      }
      else
      {
        if(x%2)
          op2++;
        else
          op1++;
      }
      i++;
    }
    deb(min(op1,op2));
    return 0;
  }
  i=0;
  ll op1,op2,op3,op4,y;
  op1=op2=op3=op4=0;
  while(i<m)
  {
    x=(bool)(s[0][i]=='0')+(bool)(s[1][i]=='0');
    y=(bool)(s[2][i]=='0')+(bool)(s[1][i]=='0');
    if(i%2)
    {
      if(x%2&&y%2)
      {
        op2++;
        op3++;
        op4++;
      }
      else if(x%2==0&&y%2==0)
      {
        op1++;
        op2++;
        op3++;
      }
      else if(x%2)
      {
        op1++;
        op3++;
        op4++;
      }
      else
      {
        op1++;
        op2++;
        op4++;
      }
    }
    else
    {
      if(x%2&&y%2)
      {
        op1++;
        op2++;
        op3++;
      }
      else if(x%2==0&&y%2==0)
      {
        op4++;
        op2++;
        op3++;
      }
      else if(x%2)
      {
        op1++;
        op2++;
        op4++;
      }
      else
      {
        op3++;
        op1++;
        op4++;
      } 
    }
    //deB(op1,op2)
    //deB(op3,op4)
    //YES
    i++;
  }
  deb(min({op1,op2,op3,op4}))
}
