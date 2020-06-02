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
ll a[300010],tim[300010];
queue<pair<ll,ll>> qu;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,q,x,u=0,p;
  cin>>n>>q;
  ll i=1,k;
  while(q--)
  {
    cin>>p>>x;
    if(p==1)
    {
      a[x]++;
      u++;
      qu.push({i,x});
      i++;
    }
    else if(p==2)
    {
      u-=a[x];
      tim[x]=i;
      a[x]=0;
    } 
    else
    {
      k=0;
      while(!qu.empty()&&k<x)
      {
        if(qu.front().ff>x)
          break;
        if(qu.front().ff&&qu.front().ff>=tim[qu.front().ss])
        {
          //deb(qu.front().ss)
          u--;
          a[qu.front().ss]--;
        }
        qu.pop();
        k++;
      }
    }
    deb(u)
  }
  return 0;
}