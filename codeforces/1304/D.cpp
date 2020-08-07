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
ll a[200009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,n,i,j,m,temp,k;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>n>>s;
    m=n;
    i=0;
    while(i<n-1)
    {
      if(s[i]=='>')
      {
        j=i;
        while(j<n-1&&s[j]=='>')
          j++;
        while(i<j)
        {
          a[i]=m;
          m--;
          i++;
        }
      }
      else
      {
        j=i;
        k=0;
        while(j<n-1&&s[j]=='<')
          j++;
        temp=j;
        while(j>=i)
        {
          a[j]=m;
          m--;
          j--;
        }
        i=temp+1;
      }
    }
    if(m)
      a[n-1]=1;
    i=0;
    while(i<n)
      cout<<a[i++]<<" ";
    cout<<"\n";
    reverse(all(s));
    for(auto &c:s)
      if(c=='>')
        c='<';
      else
        c='>';
    m=n;
    i=0;
    while(i<n-1)
    {
      if(s[i]=='>')
      {
        j=i;
        while(j<n-1&&s[j]=='>')
          j++;
        while(i<j)
        {
          a[i]=m;
          m--;
          i++;
        }
      }
      else
      {
        j=i;
        k=0;
        while(j<n-1&&s[j]=='<')
          j++;
        temp=j;
        while(j>=i)
        {
          a[j]=m;
          m--;
          j--;
        }
        i=temp+1;
      }
    }
    if(m)
      a[n-1]=1;
    i=n-1;
    while(i>-1)
    {
      cout<<a[i]<<" ";
      i--;
    }
    cout<<"\n";
  }
}