#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
#define int ll
int find_first_num_index(ll &k, ll n)
{
    if (n == 1) {
        return 0;
  }
    n--;
    
    int first_num_index;
    ll n_partial_fact = n;
 
    while (k >= n_partial_fact && n > 1) {
        n_partial_fact *= (n - 1);
        n--;
    }
 
    first_num_index = k / n_partial_fact;
    k %= n_partial_fact;
 
    return first_num_index;
}
 
 
vector <int> find_kth_permutation(ll n, ll k)
{
    vector <int> Ans;
    set <int> S;
 
    for (int i = 1; i <= n; i++) {
        S.insert(i);
  }
 
    auto itr = S.begin();
    k -= 1;
    
    for (int i = 0; i < n; i++) {
        int index = find_first_num_index(k, n - i);
        advance(itr, index);
        Ans.push_back((*itr));
    S.erase(itr);
        itr = S.begin();
    }
    
    return Ans;
}
ll a[N],f[N];
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  vi v;
  ll n,q,l,r;
  cin>>n>>q;
  ll i=1; 
  while(i<=n)
  {
    a[i]=i+a[i-1];
    i++;
  }
  ll ct=1;
  ll sum=1,m=min(15ll,n),x;
  while(q--)
  {
    cin>>x;
    if(x==1)
    {
      cin>>l>>r;
      deb(a[r]-a[l-1]);
    }
    else
    {
      cin>>x;
      sum+=x;
      v=find_kth_permutation(m,sum);
      i=v.size()-1;
      //YES
      while(i>-1)
      {
        //deb(v[i])
        f[i+1+max(0ll,n-15)]=v[i]+max(0ll,n-15);
        i--;
      }
      //YES
      i=1+max(0ll,n-15);
      while(i<=n)
      {
        a[i]=a[i-1]+f[i];
        i++;
      }
    }
  }
}