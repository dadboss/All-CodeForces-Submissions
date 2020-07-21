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
#define N NULL
struct tri
{
  tri *a[2];
  ll cnt;
  tri()
  {
    cnt=0;
    a[0]=NULL;
    a[1]=NULL;
  }
};
void ins(ll x,ll c,tri *t)
{
  ll i=30,y;
  while(i>-1)
  {
    y=x&(1ll<<i);
    y=min(1ll,y);
    //deB(i,y);
    if(t->a[y]==N)
      {
          t->a[y]=new tri();
      }
    (t->cnt)+=c;
    t=t->a[y];
    i--;
  }
  t->cnt+=c;
}
ll qry(ll x,tri *t)
{
  ll sum=0,y;
  ll i=30;
  while(i>-1)
  {
    y=x&(1ll<<i);
    y=min(1ll,y);
    //deB(i,y)
    if(t->a[1-y]!=N&&((t->a[1-y])->cnt)>0)
    {
        //YES
      sum+=(1ll<<i);
      t=t->a[1-y];
    }
    else
    {
        //NO
      t=t->a[y];
    }
    i--;
  }
  return sum;
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  tri* s;
  s=new tri();
  ll t,x;
  char ch;
  ins(0,1,s);
  cin>>t;
  while(t--)
  {
    cin>>ch>>x;
    if(ch=='+')
      ins(x,1,s);
    else if(ch=='-')
      ins(x,-1,s);
    else
    {
      deb(qry(x,s))
    }
  }
}
