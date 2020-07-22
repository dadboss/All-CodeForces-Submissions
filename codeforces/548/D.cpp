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
ll a[200009],l[200009],r[200009];
set<ll> f[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
    cin>>a[i++];
  i=1;
  stack<ll> s;
  while(i<=n)
  {
    while(!s.empty()&&a[s.top()]>=a[i])
      s.pop();
    if(s.empty())
      l[i]=0;
    else
      l[i]=s.top();
    s.push(i);
    i++;
  }
  while(!s.empty())
    s.pop();
  i=n;
  while(i)
  {
    while(!s.empty()&&a[s.top()]>=a[i])
      s.pop();
    if(s.empty())
      r[i]=n+1;
    else
      r[i]=s.top();
    s.push(i);
    i--;
  }
  i=1;
  while(i<=n)
  {
    f[r[i]-l[i]-1].insert(a[i]);
    i++;
  }
  i=n;
  ll x,mx=0;
  vector<ll> ans;
  while(i)
  {
    if(!f[i].empty())
        x=*(f[i].rbegin());
    mx=max(mx,x);
    ans.pb(mx);
    i--;
  }
  reverse(all(ans));
  for(auto x:ans)
    cout<<x<<" ";
}
