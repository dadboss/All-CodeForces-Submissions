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
//#define f(a,b,c) (a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a)
 inline ll f(ll a,ll b,ll c){return (a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);}
ll r[100000],g[100000],b[100000];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,k,ans,R,G,op1,op2,op3,mi,B;
  cin>>t;
  while(t--)
  {
    cin>>R>>G>>B;
    i=0;
    while(i<R)
      cin>>r[i++];
    i=0;
    while(i<G)
      cin>>g[i++];
    i=0;
    while(i<B)
      cin>>b[i++];
    sort(r,r+R);
    sort(g,g+G);
    sort(b,b+B);
    ans=f(r[0],g[0],b[0]);
    i=j=k=0;
    while(i<R&&j<G&&k<B)
    {
      if(i+1<R)
        {
          op1=f(r[i+1],g[j],b[k]);
        }
       else op1=LLONG_MAX;
      if(j+1<G)
        {
          op2=f(r[i],g[j+1],b[k]);
        }
        else op2=LLONG_MAX;
      if(k+1<B)
        {
          op3=f(r[i],g[j],b[k+1]);
        }
       else op3=LLONG_MAX;
       // ans=min({ans,op1,op2,op3});
        if(op1<=op2&&op1<=op3)
        {
        	i++;
        	ans=min(ans,op1);
        }
        else if(op2<=op1&&op2<=op3)
        {
        	j++;
        	ans=min(ans,op2);
        }
        else
        {
        	k++;
        	ans=min(ans,op3);
        }
     // cout<<i<<" "<<op1<<"   "<<j<<" "<<op2<<"   "<<k<<" "<<op3<<"\n";
    }
    deb(ans);
  }
}