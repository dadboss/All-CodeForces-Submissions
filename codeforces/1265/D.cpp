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
ll v[100009];
bool ctr=0;
ll f(ll a,ll b,ll c,ll d,ll i)
{
  if(b<c||(b==c&&a))
  {
    //NO
    return 0;
  }
  while(c)
  {
    v[i]=1;
    i++;
    b--;
    v[i]=2;
    i++;
    c--;
  }
  if(b)
  {
    v[i]=1;
    i++;
    b--;
  }
  if(a==b||a==b+1)
  {
    ctr=1;
    YES
    while(b)
    {
      v[i]=0;
      i++;
      a--;
      v[i]=1;
      b--;
      i++;
    }
    if(a)
      {
        v[i]=0;
        i++;
      }
    i--;
    while(i>-1)
    {
      cout<<v[i]<<" ";
      i--;
    }
  }
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll a,b,c,d,i=0;
  cin>>a>>b>>c>>d;
  if(a==b+1&&c+d==0)
  {
    YES
    while(b)
    {
      cout<<"0 1 ";
      b--;
    }
    deb(0)
    return 0;
  }
  if(d>c)
  {
    if(a+b||d>c+1)
    {
      NO
      return 0;
    }
    YES
    while(c)
    {
      cout<<"3 2 ";
      c--;
    }
    deb(3)
    return 0;
  }
  ll D=d,C=c;
    while(d)
    {
      v[i]=3;
      i++;
      d--;
      v[i]=2;
      i++;
      c--;
    }
    f(a,b,c,d,i);
    if(ctr)
      return 0;
    d=D;
    c=C;
    i=0;
    while(d)
    {
      v[i]=2;
      i++;
      c--;
      v[i]=3;
      i++;
      d--;
    }
    if(c){
    v[i]=2;
    i++;
    c--;
  }
    f(a,b,c,d,i);
    if(ctr)
      return 0;
    NO
}