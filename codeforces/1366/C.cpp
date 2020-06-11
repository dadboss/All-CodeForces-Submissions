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
ll a[35][35];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,m,ans,i,j,si,sj,o,e,ei,ej;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    i=1;
    while(i<=n)
    {
      j=1;
      while(j<=m)
      {
        cin>>a[i][j];
        j++;
      }
      i++;
    }
    si=1;
    sj=1;
    ei=n;
    ej=m;
    ans=0;
    while(1)
    {
      o=e=0;
      i=si;
      j=sj;
      while(i<=n&&j)
      {
        if(a[i][j])
          o++;
        else
          e++;
        i++;
        j--;
      }
      i=ei;
      j=ej;
      while(i<=n&&j)
      {
        if(a[i][j])
          o++;
        else
          e++;
        i++;
        j--;
      }
      ans+=min(e,o);
      if(si==1)
      {
        sj++;
        if(sj>m)
        {
          si=2;
          sj=m;
        }
      }
      else
      {
        si++;
      }
      if(ej==m)
      {
        ei--;
        if(ei==0)
        {
          ei=1;
          ej=m-1;
        }
      }
      else
        ej--;

      //deB(si,sj)
      //deB(ei,ej)
      if(si==ei&&sj==ej)
        break;
      if(si>ei||sj>ej)
        break;
    }
    deb(ans)
  }
}