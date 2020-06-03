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
ll s[600][600];
ll an[600];
multiset<ll> st;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll n,m,q,len;
  cin>>n>>m>>q;
  ll i=1,j;
  while(i<=n)
    {
      j=1;
      while(j<=m)
      {
        cin>>s[i][j];
        j++;
      }
      j=1;
      while(j<=m)
      {
        while(j<=m&&s[i][j]==0)
          j++;
        if(j==m+1)
          break;
        len=0;
        while(j<=m&&s[i][j]==1)
        {
          len++;
          j++;
        }
        an[i]=max(an[i],len);
      }
      st.insert(an[i]);
      i++;
    }
    ll l,r,ans;
  while(q--)
  {
    cin>>l>>r;
    //deb(an[l])
    st.erase(st.find(an[l]));
    an[l]=0;
    s[l][r]=1-s[l][r];
    i=l;
      j=1;
      while(j<=m)
      {
        while(j<=m&&s[i][j]==0)
          j++;
        if(j==m+1)
          break;
        len=0;
        while(j<=m&&s[i][j]==1)
        {
          len++;
          j++;
        }
        an[i]=max(an[i],len);
      }
      //deb(an[i])
      st.insert(an[i]);
      deb(*st.rbegin());
  }
}