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
ll a[100009][26];
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ll t,i,j,n,ans,np,pos,f;
  cin>>t;
  string s,q;
  while(t--)
  {
    cin>>s>>q;
    n=s.size();
    i=0;
    while(i<26)
    {
      a[n][i]=-1;
      i++;
    }
    i=n-1;
    while(i>-1)
    {
      j=0;
      while(j<26)
      {
        a[i][j]=a[i+1][j];
        j++;
      }
      a[i][s[i]-'a']=i;
      i--;
    }
    /*
    i=0;
    while(i<n)
    {
      j=0;
      while(j<6)
      {
        cout<<a[i][j]<<" ";
        j++;
      }
      i++;
      cout<<"\n";
    }
    */
    i=0;
    ans=1;
    pos=0;
    while(i<q.size())
    {
        np=a[pos][q[i]-'a'];
        if(np==-1)
        {
            if(a[0][q[i]-'a']==-1)
            {
                ans=-1;
                break;
            }
            ans++;
            pos=1+a[0][q[i]-'a'];
        }
        else
        {
            pos=1+a[pos][q[i]-'a'];
        }
        i++;
    }
    deb(ans);
  }
}


