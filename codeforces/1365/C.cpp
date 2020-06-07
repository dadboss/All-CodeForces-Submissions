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
ll a[200009],pos[200009];
map<ll,ll> ct;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,x,d;
  cin>>n;
  ll i=1;
  while(i<=n)
    {
      cin>>a[i];
      pos[a[i]]=i;
      i++;
    }
  i=1;
  ll ans=1;
  while(i<=n)
    {
      cin>>d;
      x=i-pos[d];
      if(abs(x)>n/2)
      {
        if(i>pos[d])
            x=i-(pos[d]+n);
        else
          x=i-pos[d]+n;
      }
      //deb(x)
      ct[x]++;
      ans=max(ans,ct[x]);
      i++;
    }
    deb(ans)
}