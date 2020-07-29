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
ll p[64],a[100009];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,n,m,ans,j,sum;
  cin>>t;
  i=1;
  p[0]=1;
  while(i<=62)
  {
    p[i]=2*p[i-1];
    i++;
  }
  while(t--)
  {
    cin>>n>>m;
    i=sum=0;
    unordered_map<ll,ll> s;
    while(i<m)
      {
        cin>>a[i];
        sum+=a[i];
        s[a[i]]++;
        i++;
      }
    if(sum<n)
    {
      deb(-1)
      continue;
    }
    i=ans=0;
    while(i<62)
    {
      if(n&p[i])
      {
        //deb(i)
        if(s.find(p[i])==s.end()||s[p[i]]==0)
        {
          //  YES
          j=i+1;
          while(s.find(p[j])==s.end())
          {
             j++;
            // ans++;
          }
          s[p[j]]--;
          j--;
          while(j>=i)
          {
              ans++;
            s[p[j]]++;
            j--;
          }
        }
        else
        {
          s[p[i+1]]+=(s[p[i]]-1)/2;
        }
      }
      else
      {
        s[p[i+1]]+=s[p[i]]/2;
      }
      i++;
    }
    deb(ans)
  }
}
