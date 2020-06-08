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
ll a[1000009];
string s;
map<ll,ll> m;
stack<ll> st;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>s;
  m[0]++;
  ll i=0,ans=0,u,len,ct=0;
  while(i<s.size())
  {
    if(s[i]=='(')
      st.push(i);
    else if(!st.empty())
    {
      u=st.top();
      st.pop();
      len=i-u+1;
      if(u)
        len+=a[u-1];
      m[len]++;
      a[i]=len;
    }
    i++;
  }
  auto it=m.rbegin();
  deB((*it).ff,(*it).ss)
}