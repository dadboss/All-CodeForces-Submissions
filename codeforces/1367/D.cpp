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
ll a[60];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,k,x;
  cin>>t;
  string s;
  char ch;
  while(t--)
  {
    map<char,ll> f;
    multiset<ll> S;
      cin>>s>>n;
      char e[n+4];
      i=1;
      while(i<=n)
        {
          cin>>a[i];
          S.insert(a[i]);
          i++;
        }
      for(auto x:s)
        f[x]++;
      ch='z';
      while(ch>='a')
      {
          if(f[ch]>=S.count(0))
          {
            x=S.count(0);
            //deB(ch,x)
            S.erase(0);
            i=1;
            vector<ll> v;
            while(i<=n)
            {
              if(a[i]==0)
                {
                  a[i]--;
                  e[i]=ch;
                  v.pb(i);
                }
              i++;
            }
            i=0;
            while(i<v.size())
            {
              k=1;
              while(k<=n)
              {
                if(a[k]>0)
                {
                  S.erase(S.find(a[k]));
                  a[k]-=abs(v[i]-k);
                  S.insert(a[k]);
                }
                k++;
              }
              i++;
            }
          }
          ch--;
      }
      i=1;
      while(i<=n)
        cout<<e[i++];
      cout<<"\n";
  }
}