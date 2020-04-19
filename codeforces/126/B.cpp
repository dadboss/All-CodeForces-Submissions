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
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  string s;
  cin>>s;
  ll n=s.size();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
  if(pi[n-1]==0)
  {
    deb("Just a legend");
    return 0;
  }
ll  i=1;
  while(i<n-1)
  {
    if(pi[i]==pi[n-1])
    {
      //YES
      cout<<s.substr(0,pi[n-1]);
      return 0;
    }
    i++;
  }
  if(pi[pi[n-1]-1]==0)
  {
    deb("Just a legend");
    return 0;
  }
  deb(s.substr(0,pi[pi[n-1]-1]));
}