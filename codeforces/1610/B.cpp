#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz(x) (ll)(x.size()) 
#define spmod 1116295198451
#define md 998244353 
#define mod 1000000007
#define N 300009
ll a[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll T,tt=1,n,i,j,jh,ind;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>n;
    i=0;
    while(i<n)
      cin>>a[i++];
    i=0;
    j=n-1;
    while(i<j)
    {
      if(a[i]==a[j])
        i++,j--;
      else
        break;
    }
    if(i>=j)
    {
      YES
      cont
    }
    ind=i+1;
    jh=j;
    while(ind<jh)
    {
      if(a[ind]==a[i])
        ind++;
      else if(a[jh]==a[i])
        jh--;
      else if(a[ind]==a[jh])
        ind++,jh--;
      else
        break;
    }
    if(ind>=jh)
      YES
    else
    {
      ind=i;
      jh=j-1;
      while(ind<jh)
      {
        if(a[ind]==a[j])
          ind++;
        else if(a[jh]==a[j])
          jh--;
        else if(a[ind]==a[jh])
          ind++,jh--;
        else
          break;
      }
      if(ind>=jh)
        YES
      else
        NO
    }
  }
}         