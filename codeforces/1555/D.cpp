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
ll a[N][4][4];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m,i,j,k;
  string s;
  cin>>n>>m>>s;
  s='!'+s;
  i=1;
  while(i<s.size())
  {
    j=0;
    k=0;
    while(j<3)
    {
      k=0;
      while(k<3)
      {
        a[i][j][k]=a[i-1][j][k];
        k++;
      }
      j++;
    }
    if(s[i]=='a')
      a[i][i%3][0]++;
    else if(s[i]=='b')
      a[i][i%3][1]++;
    else
      a[i][i%3][2]++;
    i++;
  }
  ll l,r,sum;
  while(m--)
  {
    cin>>l>>r;
    vi v={0,1,2};
    ll ans=INT_MAX;
    do
    {
      i=sum=0;
      while(i<3) 
      {
        sum+=a[r][i][v[i]]-a[l-1][i][v[i]];
        i++;
      }
      ans=min(ans,r-l+1-sum);
    }while(next_permutation(all(v)));
    deb(ans)
  }
}         