#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define deb(x) cout<<x<<"\n";
#define deb(x,y) cout<<x<<" "<<y<<"\n";
#define deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define ok cout<<"OK";
ll a[200010];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,i,j,f,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=0;
        f=0;
        while(i<n)
        {
            cin>>a[i];
            if(a[i]!=a[0])
                f++;
            i++;
        }
        if(f==0)
        {
            cout<<"1\n";
            i=0;
            while(i<n)
            {
                cout<<"1 ";
                i++;
            }
            cout<<"\n";
        }
        else if(n%2)
        {
            a[n]=a[0];
            i=1;
            while(i<=n)
            {
                if(a[i]==a[i-1])
                  {
                      cout<<"2\n";
                      j=0;
                      while(j<i)
                      {
                          cout<<1+j%2<<" ";
                          j++;
                      }
                      while(j<n)
                      {
                          cout<<2-j%2<<" ";
                          j++;
                      }
                      cout<<"\n";
                     break;
                  }
                i++;
            }
            if(i==n+1)
            {
                cout<<"3\n3 ";
                i=1;
                while(i<n)
                {
                    i++;
                    cout<<1+i%2<<" ";
                }
                cout<<"\n";
            }
        }
        else
        {
            cout<<"2\n";
            i=0;
            while(i<n)
            {
                cout<<1+i%2<<" ";
                i++;
            }
            cout<<"\n";
        }
    }
}
