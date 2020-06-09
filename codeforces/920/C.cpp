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
ll b[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>b[i];
    i++;
  }
  string s;
  cin>>s;
  i=0;
  ll st,e;
  while(i<s.size())
  {
    while(i<s.size()&&s[i]=='0')
      i++;
    st=i;
    e=i+1;
    while(i<s.size()&&s[i]=='1')
    {
      e++;
      i++;
    }
    sort(b+st,b+e);
  }
  i=0;
  while(i<n-1)
  {
    if(b[i]>b[i+1])
    {
      NO
      return 0;
    }
    i++;
  }
  YES
}