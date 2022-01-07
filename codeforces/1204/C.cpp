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
#define N 3000009
string s;
ll p[N];
ll dist[1000][1000];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    cin>>s;
    ll j=1;
    while(j<=n)
    {
      if(j==i)
        dist[i][j]=0;
      else if(s[j-1]=='1')
        dist[i][j]=1;
      else
        dist[i][j]=INT_MAX;
      j++;
    }
    i++;
  }
  ll V=n;
    for (int k = 1; k <=V; k++) {
        // Pick all vertices as source one by one
        for (int i = 1; i <=V; i++) {
            // Pick all vertices as destination for the
            // above picked source
            for (int j = 1; j <= V; j++) {
                // If vertex k is on the shortest path from
                // i to j, then update the value of
                // dist[i][j]
                if (dist[i][j] > (dist[i][k] + dist[k][j]))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
  vi ans;
  ll m;
  cin>>m;
  i=0;
  while(i<m)
    cin>>p[i++];
  ans.pb(p[0]);
  i=2;
  while(i<m)
  {
    if(dist[p[i-1]][p[i]]+dist[ans.back()][p[i-1]]>dist[ans.back()][p[i]])
      ans.pb(p[i-1]);
    i++;
  }
  ans.pb(p[m-1]);
  deb(ans.size())
  for(auto x:ans)
    cout<<x<<" ";
}         