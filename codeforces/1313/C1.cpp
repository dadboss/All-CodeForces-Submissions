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
ll a[500009],p[500009],q[500009];
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
  stack<ll> st,ts;
  i=1;
  while(i<=n)
  {
    while(!st.empty()&&a[st.top()]>a[i])
      st.pop();
    if(st.empty())
    {
      p[i]=i*a[i];
    }
    else
    {
      p[i]=p[st.top()]+(i-st.top())*a[i];
    }
    st.push(i);
    i++;
  }
  i=n;
  while(i)
  {
    while(!ts.empty()&&a[ts.top()]>a[i])
      ts.pop();
    if(ts.empty())
    {
      q[i]=(n+1-i)*a[i];
    }
    else
    {
      q[i]=q[ts.top()]+(ts.top()-i)*a[i];
    }
    ts.push(i);
    i--;
  }
  i=2;
  ll k=1;
  while(i<=n)
  {
    if(p[k]+q[k+1]<=p[i]+q[i+1])
      k=i;
    i++;
  }
  //deB(k,p[k]+q[k+1])
  i=k-1;
  while(i)
  {
    a[i]=min(a[i+1],a[i]);
    i--;
  }
  i=k+1;
  while(i<=n)
  {
    a[i]=min(a[i-1],a[i]);
    i++;
  }
  i=1;
  while(i<=n)
    cout<<a[i++]<<" ";
}