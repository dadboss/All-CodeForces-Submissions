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
ll r[20];
string s;
ll p,n,ans,z;
inline log10(ll x)
{
  p=-1;
  while(x)
  {
    p++;
    x/=10;
  }
  return p;
}
inline ll f(ll x)
{
  if(x==0)
    return 0;
  p=log10(x);
  //deb(p)
  ans=r[p];
  s=to_string(x);
  ll i=1;
  n=s[0]-'1';
  ans+=n*(1+9*p+81*p*(p-1)/2);
  ans++;
  while(i<s.size()&&s[i]=='0')
    i++;
  if(i==s.size())
    return ans;
  n=p-i;
  ans+=9*n+81*n*(n-1)/2;
  z=s[i]-'1';
  ans+=z*(1+9*n);
  ans++;
  i++;
  while(i<s.size()&&s[i]=='0')
    i++;
  if(i==s.size())
    return ans;
  n=p-i;
  ans+=9*n;
  z=s[i]-'0';
  ans+=z;
  return ans;

}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,l,R,x,y;
  r[1]=9;
  r[2]=99;
  r[3]=999;
  ll i=4;
  while(i<20)
  {
    r[i]=9;
    x=1;
    x+=9*(i-1);
    x+=(81*(i-1)*(i-2))/2;
    r[i]*=x;
    r[i]+=r[i-1];
    i++;
  }
  cin>>t;
  while(t--)
  {
    cin>>l>>R;
    x=f(R);
    y=f(l-1);
    x-=y;
    deb(x);
  }
}