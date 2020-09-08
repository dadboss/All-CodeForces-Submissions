#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
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
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 100009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

ll x[N],y[N];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll ax,ay,bx,by,tx,ty,n;
  cin>>ax>>ay>>bx>>by>>tx>>ty;
  cin>>n;
  ll i=0;
  double sum=0,temp,ans=LLONG_MAX,mn1=LLONG_MAX,mn2=LLONG_MAX;
  ll bi;
  while(i<n)
  {
    cin>>x[i]>>y[i];
    temp=sqrt((tx-x[i])*(tx-x[i])+(ty-y[i])*(ty-y[i]));
    sum+=2.0*temp;
    temp=sqrt((bx-x[i])*(bx-x[i])+(by-y[i])*(by-y[i]))-temp;
    if(temp<mn1)
    { 
      mn2=mn1;
      mn1=temp;
      bi=i;
    }
    else if(temp<mn2)
      mn2=temp;
    i++;
  }
  i=0;
  while(i<n)
  {
    temp=sqrt((ax-x[i])*(ax-x[i])+(ay-y[i])*(ay-y[i]));
    temp-=sqrt((tx-x[i])*(tx-x[i])+(ty-y[i])*(ty-y[i]));
    if(i!=bi)
      ans=min(ans,sum+temp+mn1);
    else
      ans=min(ans,sum+temp+mn2);
    ans=min({ans,sum+temp,sum+sqrt((bx-x[i])*(bx-x[i])+(by-y[i])*(by-y[i]))-sqrt((tx-x[i])*(tx-x[i])+(ty-y[i])*(ty-y[i]))});
    i++;
  }
  cout<<fixed<<setprecision(15)<<ans;
}