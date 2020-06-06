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
ll w[200009],h[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,len=0;
  multiset<ll> s;
  cin>>n;
  ll i=0;
  while(i<n)
  {
    cin>>w[i]>>h[i];
    len+=w[i];
    s.insert(h[i]);
    i++;
  }
  i=0;
  while(i<n)
  {
    s.erase(s.find(h[i]));
    cout<<(len-w[i])**s.rbegin()<<" ";
    s.insert(h[i]);
    i++;
  }
}