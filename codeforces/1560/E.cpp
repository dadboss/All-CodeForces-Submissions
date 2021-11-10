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
map<char,ll> c,tot;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    string s,temp,ans,nt,t;
  ll T,tt=1,ct,i,ind,sum;
  cin>>T;
  while(T--)
  {
    //cout<<"Case #"<<tt<<": ";
    //tt++;
    cin>>s;
    c.clear();
    t.clear();
    tot.clear();
    for(auto x:s)
      c[x]++;
    ct=c.size();
    i=s.size()-1;
    while(i>-1)
    {
      if(c[s[i]]!=0)
      {
        if(c[s[i]]%ct)
        {
          deb(-1)
          break;
        }
        t+=s[i];
        tot[s[i]]=c[s[i]]/ct;
        c[s[i]]=0;
        ct--;
      }
      i--;
    }
    if(i>-1)
      cont
    reverse(all(t));
    ind=0;
    for(auto x:t)
    {
      sum=i=0;
      while(i<s.size()&&sum<tot[x])
      {
        if(s[i]==x)
          sum++;
        ind=max(ind,i);
        i++;
      }
    }
    c.clear();
    i=0;
    while(i<=ind)
    {
      c[s[i]]++;
      i++;
    }
    if(c!=tot)
    {
      deb(-1)
      cont
    }
    temp=s.substr(0,ind+1);
    ans=temp;
    for(auto x:t)
    {
      nt.clear();
      for(auto y:temp)
        if(y!=x)
          nt+=y;
      ans+=nt;
      temp=nt;
    }
    if(ans==s)
      deB(s.substr(0,ind+1),t)
    else
      deb(-1)
  }
}         