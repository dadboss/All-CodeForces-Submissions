#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<climits>
#include<cstring>
#include<iomanip>
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
#define N 200009

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll t,i,n,d,j,f;
  cin>>t;
  while(t--)
  {
    vi v;
    cin>>n;
    i=f=0;
    set<ll> s;
    while(i<n)
    {
        cin>>d;
        s.insert(d);
        if(d<0)
            f=1;
        v.pb(d);
        i++;
    }   
    if(f)
        {
            NO
            cont;
        }   
    while(1)
    {
        i=f=0;
        while(i<v.size())
        {
            j=i+1;
            while(j<v.size())
            {
                if(s.find(abs(v[i]-v[j]))==s.end())
                {
                    f=1;
                    s.insert(abs(v[i]-v[j]));
                    v.pb(abs(v[i]-v[j]));
                }
                j++;
            }
            i++;
        }
        if(f==0)
            break;
    }
    if(v.size()>300)
    {
        NO
        cont;
    }
    YES
    deb(v.size())
    for(auto x:v)
        cout<<x<<" ";
    cout<<"\n";
  }
}        