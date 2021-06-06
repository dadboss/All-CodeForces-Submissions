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
  ll t,i,n;
  char ch,rt,yt;
  string s,z;
  cin>>t;
  while(t--)
  {
    cin>>n>>s;
    ll f[26]={};

    for(auto x:s)
        f[x-'a']++;
    i=0;
    while(i<26)
    {
        if(f[i]==0)
            break;
        i++;
    }
    if(i==26)
    {
        set<string> st;
        i=0;
        while(i<(ll)s.size()-1)
        {
            st.insert(s.substr(i,2));
            i++;
        }
        char ch='a';
        while(ch<='z')
        {
            rt='a';
            while(rt<='z')
            {
                z=ch;
                z+=rt;
                if(st.find(z)==st.end())
                {
                    deb(z)
                    break;
                }
                rt++;
            }
            if(rt<='z')
                break;
            ch++;
        }
        if(ch<='z')
        {

        }
        else
        {
            st.clear();
            i=0;
            while(i<(ll)s.size()-2)
            {
                st.insert(s.substr(i,3));
                i++;
            }
            ch='a';
            while(ch<='z')
            {
                rt='a';
                while(rt<='z')
                {
                    yt='a';
                    while(yt<='z')
                    {
                        z=ch;
                        z+=rt;
                        z+=yt;
                        if(st.find(z)==st.end())
                        {
                            deb(z)
                            break;
                        }
                        yt++;
                    }
                    if(yt<='z')
                        break;
                    rt++;
                }
                if(rt<='z')
                    break;
                ch++;
            }
        }
    }
    else
    {
        ch='a'+i;
        deb(ch)   
    }
  }
}        